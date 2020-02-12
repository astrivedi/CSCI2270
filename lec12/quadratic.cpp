#include<iostream>

long F(long n) {
  long res = 0;
  for (long i = 0; i <=n; i++) {
    for (long j = 0; j <= i; j++) {
      res++;
    }
  }
  return res;
}
int main(int argc, char* argv[]) {

  if (argc == 2) std::cout << F(atol(argv[1]));
  return 0;
}
