#include<iostream>
#include<string>
using namespace std;
// https://www.cprogramming.com/debugging/valgrind.html

int main() {

  char* str = new char [30]; // Give str a memory address.

  str = new char [60]; /* Give str another memory address with the first one gone forever.*/

  delete [] str; // This deletes the 60 bytes, not just the first 30.

  return 0;
}
