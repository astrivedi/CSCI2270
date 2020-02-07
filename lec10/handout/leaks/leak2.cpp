#include<iostream>
#include<string>
using namespace std;

int main() {
  int* x = new int [30]; // assign an address to str1 with 30 chars capacity

  int* y = new int [40]; // assign another address to str2

  x[0] = 20;
  x[1] = 30;

  y = x; // Bad! Now the 40 bytes are impossible to free.

  delete [] y; // This deletes the 30 bytes.

  delete [] x; // Possible access violation. What a disaster!
  return 0;
}
