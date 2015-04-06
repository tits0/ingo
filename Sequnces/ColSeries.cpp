#include <stdio.h>
#include <stdlib.h>
#include <fstream>     // std::fstream
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#define ROWSIZE 10
typedef std::array<char,ROWSIZE> ROWTYPE;
ROWTYPE cols0 {1,2,3,4,5,6,7,8,9,10};
ROWTYPE cols1 {11,12,13,14,15,16,17,18,19,20};
ROWTYPE cols2 {21,22,23,24,25,26,27,28,29,30};
ROWTYPE cols3 {31,32,33,34,35,36,37,38,39,40};
ROWTYPE cols4 {41,42,43,44,45,46,47,48,49,50};
ROWTYPE cols5 {51,52,53,54,55,56,57,58,59,60};
ROWTYPE cols6 {61,62,63,64,65,66,67,68,69,70};
ROWTYPE cols7 {71,72,73,74,75,76,77,78,79,80};
ROWTYPE cols8 {81,82,83,84,85,86,87,88,89,10};
ROWTYPE cols9 {91,92,93,94,95,96,97,98,99,100};
ROWTYPE cols[10] {cols0,cols1,cols2,cols3,cols4,cols5,cols6,cols7,cols8,cols9};
const char* getcharFromI(char i); 

void createSeq(char* outfile1, std::mt19937& g) {
  std::fstream outfileFS1;
  outfileFS1.open(outfile1, std::ios_base::out);
  time_t seed = time(0);
  char buff[100];
  //1

  for(int i=0;i<sequencesize;++i) {
    std::shuffle (foo.begin(), foo.end(), g);
    std::shuffle (foo3.begin(), foo3.end(), g);
    //if (i%4==0) {seed = time(0);}
    outfileFS1 << "{";
    outfileFS2 << "{";
    outfileFS3 << "{";
    int rsize=9;
    int hj=rsize-1;
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
*/