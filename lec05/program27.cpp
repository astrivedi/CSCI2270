// program27.cpp
#include<iostream>
int main(int argc, char* argv[])  {
  int *big = new int[10000000]; // Trying to allocate a huge array on heap
  // No problem what-so-ever!
  return 0;
}

