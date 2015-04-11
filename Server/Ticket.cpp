#include "Ticket.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring> 
static unsigned int my_seed;
//Used to seed the generator.
 
#include <random>
#include <Constants.h>

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
 
 
void getMatrix(std::vector<Ticket> & tickets)
{
    static unsigned int smatrixIndex=0;

    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)

    int random_integer = uni(rng);
    for(int i=0;i<10;++i) {
        std::shuffle (cols[i].begin(), cols[i].end(), rng);
    }
    for(int matrixIndex=0; matrixIndex<tickets.size();++matrixIndex, ++smatrixIndex){
        const char* row1=getRowOne(smatrixIndex);
        const char* row2=getRowTwo(smatrixIndex);
        const char* row3=getRowThree(smatrixIndex);
        for(int row=0; row < Ticket.SROWS; ++row) {
            std::memset( tickets[matrixIndex].m_matrix[row], Ticket.SCOLS, 0);
            for(int icols=0;icols<MAX_ENTRIES;++icols) {
                tickets[matrixIndex].m_matrix[row][row1[icols]]= cols[row1[icols]][smatrixIndex%10]
            }
        }
    }
}

Ticket::Ticket()
{
}

Ticket::~Ticket()
{
}

