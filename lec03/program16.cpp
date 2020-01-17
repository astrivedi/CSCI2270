// program16.cpp 
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile("example.txt", ios::binary | ios::app | ios::out);
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
