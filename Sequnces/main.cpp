#include <stdio.h>
#include <stdlib.h>
#include <fstream>     // std::fstream
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

#define ROWSIZE 10
std::array<char,ROWSIZE> foo {1,2,3,4,5,6,7,8,9, 10};
std::array<char,ROWSIZE> foo3 {1,2,3,4,5,6,7,8,9, 10};

const char* getcharFromI(char i) {
    switch(i) {
        case 1: return " 1";
        case 2: return " 2";
        case 3: return " 3";
        case 4: return " 4";
        case 5: return " 5";
        case 6: return " 6";
        case 7: return " 7";
        case 8: return " 8";
        case 9: return " 9";
        case 10: return "10";

        case 11: return "11";
        case 12: return "12";
        case 13: return "13";
        case 14: return "14";
        case 15: return "15";
        case 16: return "16";
        case 17: return "17";
        case 18: return "18";
        case 19: return "19";
        case 20: return "20";

        case 21: return "21";
        case 22: return "22";
        case 23: return "23";
        case 24: return "24";
        case 25: return "25";
        case 26: return "26";
        case 27: return "27";
        case 28: return "28";
        case 29: return "29";
        case 30: return "30";

        case 31: return "31";
        case 32: return "32";
        case 33: return "33";
        case 34: return "34";
        case 35: return "35";
        case 36: return "36";
        case 37: return "37";
        case 38: return "38";
        case 39: return "39";
        case 40: return "40";

        case 41: return "41";
        case 42: return "42";
        case 43: return "43";
        case 44: return "44";
        case 45: return "45";
        case 46: return "46";
        case 47: return "47";
        case 48: return "48";
        case 49: return "49";
        case 50: return "50";

        case 51: return "51";
        case 52: return "52";
        case 53: return "53";
        case 54: return "54";
        case 55: return "55";
        case 56: return "56";
        case 57: return "57";
        case 58: return "58";
        case 59: return "59";
        case 60: return "60";

        case 61: return "61";
        case 62: return "62";
        case 63: return "63";
        case 64: return "64";
        case 65: return "65";
        case 66: return "66";
        case 67: return "67";
        case 68: return "68";
        case 69: return "69";
        case 70: return "70";

        case 71: return "71";
        case 72: return "72";
        case 73: return "73";
        case 74: return "74";
        case 75: return "75";
        case 76: return "76";
        case 77: return "77";
        case 78: return "78";
        case 79: return "79";
        case 80: return "80";

        case 81: return "81";
        case 82: return "82";
        case 83: return "83";
        case 84: return "84";
        case 85: return "85";
        case 86: return "86";
        case 87: return "87";
        case 88: return "88";
        case 89: return "89";
        case 90: return "90";

        case 91: return "91";
        case 92: return "92";
        case 93: return "93";
        case 94: return "94";
        case 95: return "95";
        case 96: return "96";
        case 97: return "97";
        case 98: return "98";
        case 99: return "99";
        case 100: return "100";

    }
    return "NA";
}

void createPart(char* outfile1, char* outfile2, char* outfile3, int sequencesize , int parts, std::mt19937& g) {
  std::fstream outfileFS1;
  std::fstream outfileFS2;
  std::fstream outfileFS3;
  outfileFS1.open(outfile1, std::ios_base::out);
  outfileFS2.open(outfile2, std::ios_base::out);
  outfileFS3.open(outfile3, std::ios_base::out);
  time_t seed = time(0);
  char buff[100];
  //1
  sprintf(buff,"char rowPos_row1_Part_%d[%d][9] = {\n", parts, sequencesize);
  outfileFS1 << buff ;
  //2  
  sprintf(buff,"char rowPos_row2_Part_%d[%d][9] = {\n", parts, sequencesize);
  outfileFS2 << buff ;
  //3 
  sprintf(buff,"char rowPos_row3_Part_%d[%d][9] = {\n", parts, sequencesize);
  outfileFS3 << buff ;

  for(int i=0;i<sequencesize;++i) {
    std::shuffle (foo.begin(), foo.end(), g);
    std::shuffle (foo3.begin(), foo3.end(), g);
    //if (i%4==0) {seed = time(0);}
    outfileFS1 << "{";
    outfileFS2 << "{";
    outfileFS3 << "{";
    int rsize=5;
    int hj=ROWSIZE-1;
    for (int j=0;j< rsize;++j) {
        outfileFS1 << getcharFromI(foo[j]);
        outfileFS2 << getcharFromI(foo[hj]);
        if (j<rsize-1) { 
            outfileFS1 << ",";
            outfileFS2 << ",";
        }
    --hj;
    }
    for (int j=0; j< rsize;++j) {
        outfileFS3 << getcharFromI(foo3[j]);
        if (j<rsize-1) { 
            outfileFS3 << ",";
        }
    }
      if (i<sequencesize-1) { 
          outfileFS1 << "},";
          outfileFS2 << "},";
          outfileFS3 << "},";
          } 
      if (i%7==0) {
          outfileFS1 << "\n";
          outfileFS2 << "\n";
          outfileFS3 << "\n";
          }
  }
  outfileFS1 << "}\n};";
  outfileFS2 << "}\n};";
  outfileFS3 << "}\n};";
  outfileFS1.close();
  outfileFS2.close();
  outfileFS3.close();
    
}


int main(int argc, char **argv) {
  int sequencesize = atoi(argv[1]);
  char* outfile= argv[2];
  int parts= atoi(argv[3]);
  char buff1[100];
  char buff2[100];
  char buff3[100];
    snprintf(buff1,100, "%s.out1", outfile);
    snprintf(buff2,100, "%s.out2", outfile);
    snprintf(buff3,100, "%s.out3", outfile);
  std::random_device rd;
  std::mt19937 g(rd());
  for (int idx=0; idx< parts; ++idx ) {
    snprintf(buff1,100, "%s_Part_%d_Row_1.inc", outfile, idx);
    snprintf(buff2,100, "%s_Part_%d_Row_2.inc", outfile, idx);
    snprintf(buff3,100, "%s_Part_%d_Row_3.inc", outfile, idx);
    createPart(buff1, buff2, buff3, sequencesize/parts, idx, g); 
  }
  
  return 0;
}
