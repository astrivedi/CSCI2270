// program7.cpp 
#include<iostream>
int main(int argc, char* argv[]) 
{
  char ch= 'a';
  char *cp; // cp is a pointer variable 
  cp = &ch; // cp points to the address of the ch
  std::cout << "Size of a pointer to char: ";
  std::cout << sizeof(char *) << std::endl;
  std::cout << "Address of ch is = " << (void *) cp;
  return 0;
}
