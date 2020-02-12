#include<iostream>

long Fib(long n);

int main(int argc, char*argv[]) {
  int n = atoi(argv[1]);
  std::cout<< "Fib("<< n << ") = " << Fib(n) << std::endl;
}

long Fib(long n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  else {
    long *F = new long[n+1];
    long res;

    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= n; i++) {
      F[i] = F[i-1] + F[i-2];
    }

    res = F[n];

    delete[] F;
    return res;
  }
}
