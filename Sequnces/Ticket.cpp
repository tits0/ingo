#include "Ticket.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring> 
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <cstring> 
#include <iomanip>
static unsigned int my_seed;
//Used to seed the generator.
 
#include <random>
#include <array>
#include <Constants.h>
#define ROWSIZE 10
typedef std::array<char, ROWSIZE> ROWTYPE;
ROWTYPE cols0 { 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
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
 
 
void getMatrix(std::vector<Ticket> & tickets, int sequencesize)
{
    tickets.reserve(sequencesize);
    
    static unsigned int smatrixIndex=0;

    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)

    for(int i=0;i<10;++i) {
        std::shuffle (cols[i].begin(), cols[i].end(), rng);
    }
    std::vector<Row> row1(sequencesize);
    std::vector<Row> row2(sequencesize);
    std::vector<Row> row3(sequencesize);
    //std::vector<Row>& row[3] {row1, row2, row3};
    createPart(sequencesize, rng, row1, row2, row3 );
    for(int matrixIndex=0; matrixIndex<sequencesize;++matrixIndex, ++smatrixIndex){
        Ticket t;
        for(int icols=0;icols<MAX_ENTRIES;++icols) {
            t.m_matrix[0][row1[matrixIndex].cols[icols]]= cols[row1[matrixIndex].cols[icols]][smatrixIndex%10];
            t.m_matrix[1][row2[matrixIndex].cols[icols]]= cols[row2[matrixIndex].cols[icols]][(smatrixIndex+1)%10];
            t.m_matrix[2][row3[matrixIndex].cols[icols]]= cols[row3[matrixIndex].cols[icols]][(smatrixIndex+2)%10];
        }
        tickets.push_back(t);
        std::cout << "\n";
        std::cout << "\n";
        for(int icols=0;icols<Ticket::SCOLS;++icols) {
            std::cout << std::setw(2) << std::right << (int)t.m_matrix[0][icols] << ",";
        }
        std::cout << "\n";
        for(int icols=0;icols<Ticket::SCOLS;++icols) {
            std::cout << std::setw(2) << std::right << (int)t.m_matrix[1][icols] << ",";
        }
        std::cout << "\n";
        for(int icols=0;icols<Ticket::SCOLS;++icols) {
            std::cout << std::setw(2) << std::right << (int)t.m_matrix[2][icols] << ",";
        }
    
    }
}

Ticket::Ticket()
{
    init();
}

void Ticket::init(void )
{
    for(int i=0;i<Ticket::SCOLS;++i) {
        m_matrix[0][i]= 0;
        m_matrix[1][i]= 0;
        m_matrix[2][i]= 0;
    }

}

Ticket::~Ticket()
{
}

