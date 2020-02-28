#include <iostream>
using namespace std;


long factorial(long n, long b) {
  if (n == 0) {
    return b;
  }
  return factorial(n - 1, b * n);
}

int main(int argc, char* argv[]) {
  cout << factorial(atoi(argv[1]), 1) << endl;
  return 0;
}
