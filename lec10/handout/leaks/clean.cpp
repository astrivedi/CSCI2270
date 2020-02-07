#include<iostream>
#include<string>
using namespace std;

int main() {
  char* str = new char [30]; // Allocate 30 bytes to house a string.

  delete [] str; // Clear those 30 bytes and make str point nowhere.
  return 0;
}
