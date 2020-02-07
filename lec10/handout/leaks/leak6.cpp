#include<iostream>
#include<string>
using namespace std;

// Finding Invalid Pointer Use With Valgrind
int main() {

  int* x = new int[10];

  x[12] = 20;

  delete[] x;

  return 0;
}
