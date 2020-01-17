// program18.cpp 
#include <iostream>
#include <fstream>
#include <string>
int main (int argc, char *argv[]) {
  std::ifstream fin("addresses.txt");
  if (fin.is_open()) {
    std::string line;
    while (getline(fin, line)) {
      std::size_t found = line.find("TX");
      if (found!=std::string::npos) {
	std::cout << line << std::endl;
      }
    }
  }
  else std::cerr << "File addresses.txt not found!";
  fin.close(); // Don't forget to close!
  return 0;
}
