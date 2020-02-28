#include <iostream>
using namespace std;

long fibonacci(long n) {
  if (n == 0) {
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(int argc, char* argv[]) {
  cout << fibonacci(atoi(argv[1])) << endl;
  return 0;
}
