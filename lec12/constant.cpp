#include<iostream>

int F(int n) {
  return 42;
}
int main(int argc, char* argv[]) {
  
  if (argc == 2) std::cout << F(atoi(argv[1]));
  return 0;
}
