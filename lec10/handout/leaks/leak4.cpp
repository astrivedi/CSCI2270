#include<iostream>
#include<string>
using namespace std;

int main() {

  char* one = new char;

  delete [] one; // Wrong

  char* many = new char [30];

  delete many; // Wrong!

  return 0;
}
