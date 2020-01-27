// program45.cpp 
#include<iostream>
int* foo(int  x);
int main(int argc, char* argv[]) {
  if (argc == 2) {
    int* res = foo(atoi(argv[1]));
    // Some other computation that uses "res"
    delete[] res;
    res = 0;
    // Some other computation that does not use "res"
  }
    return 0;
}
int* foo(int x) {
  int* res = new int[x];
  return res;
}
