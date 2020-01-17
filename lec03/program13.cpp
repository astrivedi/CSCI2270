// program11.cpp 
#include<iostream>
#include<fstream>
#include<string>

ID,Name,Phone,Email,Street,City,State,Zip,LAT,LONG
  
struct address {
  int id;
  string name;
  string phone;
  string email;
  string street;
  string city;
  string state;
  string zip;
  float lat;
  float lon;
};

int main(int argc, char* argv[])  {
  switch (argc) {
  1:
    std::cout  << "Too few arguments: provide the name of address file" << std::endl;
    break;
  2: 
    std::ifstream inFile ("addresses.txt");
    std::string line;
    
    if (inFile.is_open()) {
      while (std::getline(inFile, line)) {
	std::cout << line << std::endl;
      }
    }
    else {
      std::cerr << "File does not exist!\n" << std::endl;
      return -1;
    }
    inFile.close();
    break;
  3:
    std::cout << "Too many arguments!" << std::endl;
  }
  return 0;}

