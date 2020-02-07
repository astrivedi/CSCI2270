#include<iostream>
#include<string>
using namespace std;

//Freeing twice

int main() {

  int* x = new int[30];

  delete[] x;

  //x = new int[3];
  delete[] x;

  return 0;
}
