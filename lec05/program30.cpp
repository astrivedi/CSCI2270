// program30.cpp
#include<iostream>
int main(int argc, char* argv[])  {
  char c = 'a';
  char *cp = 0;

  cp = &c;
  std::cout << *cp << std::endl;

  *cp = 'b';
  std::cout << c << std::endl;
  std::cout << *cp << std::endl;

  cp = &*&*&c;
  std::cout << *cp << std::endl;

  return 0;
}
