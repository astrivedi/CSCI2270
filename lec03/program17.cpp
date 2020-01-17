// program17.cpp 
#include <iostream>
#include <fstream>
int main (int argc, char *argv[]) {
  std::ifstream fin("addresses.txt");
  if (fin.is_open()) {
    std::cout << "File is open as fin stream\n";
    char c;
    fin >>  c;
    std::cout << "first char is " << c << " \n";
  }
  else std::cerr << "File addresses.txt not found!";
  fin.close(); // Don't forget to close!
  return 0;
}
