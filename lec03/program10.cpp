// program10.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  int i = 1;
  int &r = i; // r and i refer to same int
  // int &s;  // Error: must be initialized unless "extern"
  int x = r;  // x = 1
  r = 2;      // x = 2
  return 0;
}
