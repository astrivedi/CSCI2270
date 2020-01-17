// program19.cpp 
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
int main (int argc, char *argv[]) {
  std::ifstream fin("addresses.txt");
  if (fin.is_open()) {
    std::string line;
    while (getline(fin, line)) {
      std::stringstream sin(line);
      std::string id, name, phone, email, street, zip, city, state, lat, lon;
      getline(sin, id, ',');
      getline(sin, name, ',');
      getline(sin, phone, ',');
      getline(sin, email, ',');
      getline(sin, street, ',');
      getline(sin, city, ',');
      getline(sin, state, ',');
      getline(sin, zip, ',');
      getline(sin, lat, ',');
      getline(sin, lon, ' ');
      std:: cout << name  << "lives in " << state << std::endl;
    }
  }
  else std::cerr << "File addresses.txt not found!";
  fin.close(); // Don't forget to close!
  return 0;
}
