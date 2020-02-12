#include<iostream>

long F(long n) {
  long res = 1;

  while (n > 1) {
    res++;
    n = n/2;
  }

  return res;
}
int main(int argc, char* argv[]) {

  if (argc == 2) std::cout << F(atol(argv[1]));
  return 0;
}
