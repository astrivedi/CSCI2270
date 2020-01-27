// program4.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  bool bo = true; 
  unsigned char ch = 'a'; // signed and unsigned 
  long int in = 100; // signed and unsigned, short and long
  long double fl = 1.2e10; // float, double, and long double 
  std::cout << "Size of:" << std::endl;
  std::cout << "\t bool(" << sizeof(bo) << ")" << std::endl;
  std::cout << "\t char(" << sizeof(ch) <<")" << std::endl;
  std::cout << "\t int(" << sizeof(in) << ")" << std::endl;
  std::cout << "\t float(" << sizeof(fl) << ")\n";
  return 0;
}
