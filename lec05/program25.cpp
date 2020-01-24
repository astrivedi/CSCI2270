// program25.cpp
#include<iostream>
int main(int argc, char* argv[])  {
  int big[1000000]; // Trying to allocate a huge array on stack
  // Since stack memory is limit (see ulimit -a), it will result in segfault
  return 0;
}

