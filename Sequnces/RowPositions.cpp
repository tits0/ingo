#include <stdio.h>
#include <stdlib.h>
#include <fstream>     // std::fstream
#include <iostream>     // std::cout
#include "Ticket.h"

#define ROWSIZE 10
std::array<char,ROWSIZE> foo {0,1,2,3,4,5,6,7,8,9};
std::array<char,ROWSIZE> foo3 {0,1,2,3,4,5,6,7,8,9};

const char* getcharFromI(char i);

void createPart(unsigned int sequencesize, 
    std::mt19937& g, 
    std::vector<Row>& row1, 
    std::vector<Row>& row2, 
    std::vector<Row>& row3 ) 
 {
  time_t seed = time(0);

  for(unsigned int i=0;i<sequencesize;++i) {
    std::shuffle (foo.begin(), foo.end(), g);
    std::shuffle (foo3.begin(), foo3.end(), g);
    //if (i%4==0) {seed = time(0);}
    int rsize=5;
    int hj=ROWSIZE-1;
    for (int j=0;j< rsize;++j) {
        row1[i].cols[j] = foo[j];
        row2[i].cols[j] = foo[hj];
        row3[i].cols[j] = foo3[j];
        --hj;
    }
  }
    
}

