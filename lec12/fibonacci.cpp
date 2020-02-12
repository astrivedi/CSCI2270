#include<iostream>

long Fib(long n);

int main(int argc, char*argv[]) {
  long n = atol(argv[1]);
  std::cout<< "Fib("<< n << ") = " << Fib(n) << std::endl;
}

long Fib(long n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  else return Fib(n-1) + Fib(n-2);
}
