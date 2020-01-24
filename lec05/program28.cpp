// program28.cpp
#include<iostream>
void untidiness(int depth);
int main(int argc, char* argv[])  {
  if (argc==2) untidiness(atoi(argv[1]));
  return 0;
}
void untidiness(int depth) {
 int *big = new int[10000000]; // Trying to allocate a huge array on heap
 // Use this arrary 
 if (depth > 0) untidiness(depth-1);
}
