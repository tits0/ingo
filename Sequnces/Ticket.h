#ifndef TICKET_H
#define TICKET_H

#include <Constants.h>
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

struct Row {
    short cols[MAX_ENTRIES];
};


struct Ticket
{
    static const int SROWS=3;
    static const int SCOLS=10;
    short m_matrix[SROWS][SCOLS];
    Ticket() ;
    void init(void );
    ~Ticket();

};
void getMatrix(std::vector<Ticket> & tickets, int sequencesize=2000000);
void createPart(unsigned int sequencesize, 
    std::mt19937& g, 
    std::vector<Row>& row1, 
    std::vector<Row>& row2, 
    std::vector<Row>& row3 );

#endif // TICKET_H
