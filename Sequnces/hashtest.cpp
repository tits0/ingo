/*#include <stdio.h>
#include <stdlib.h>
#include <fstream>     // std::fstream
#include <iostream>     // std::cout
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

int main(int argc, char **argv) {
  int sequencesize = atoi(argv[1]);
  std::random_device rd;
  std::mt19937 g(rd());
  for (int idx=0; idx< sequencesize; ++idx ) {
    std::cout<< idx%10 << " , "; 
  }
  
  return 0;
}


*/