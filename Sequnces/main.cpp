#include <stdio.h>
#include <stdlib.h>
#include <fstream>     // std::fstream
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include "Ticket.h"
#include "SqlLiteTicket.h"

int main(int argc, char **argv) {
  int sequencesize = atoi(argv[1]);
  //char* outfile= argv[2];
  //int parts= atoi(argv[2]);
   // createPart(buff1, buff2, buff3, sequencesize/parts, idx, g); 
   std::vector<Ticket>  tickets;
   getMatrix(tickets, sequencesize);  
   SqlLiteTicket sqlLiteTicket;
   sqlLiteTicket.Insert(tickets);
  return 0;
}
