// program11.cpp 
#include<iostream>
#include<fstream>
int main(int argc, char* argv[])  {
  std::ofstream outFile;
  
  outFile.open("output.txt");
  if (outFile.is_open()) {
    outFile << "Hello, World!" << std::endl;
  }
  else {
    std::cerr << "File could not be opened!\n" << std::endl;
    return -1;
  }
  outFile.close();
  
  return 0;
}
