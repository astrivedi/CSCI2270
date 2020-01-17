// program8.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  int ia[3]; //Array of 3 ints with garbage values
  std::cout << ia[1] << std::endl;
  float fa[] = {1, 2, 3}; //Array of 3 floats initialzed: size automatically computed 
  std::cout << fa[2] << std::endl; // Read different values
  return 0;
}
