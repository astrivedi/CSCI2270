#include<iostream>
#include<string>
using namespace std;

void Leak(int x){

  char* p = new char [x];

  // delete [] p; // Remove the first comment marking to correct.

}

int main() {

  Leak(100);
  return 0;
}
