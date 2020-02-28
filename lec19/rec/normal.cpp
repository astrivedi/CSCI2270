#include <iostream>
using namespace std;

long factorial(long n) {
  if (n > 1) {
    return n * factorial(n - 1);
  }
  else {
    return 1;
  }
}

int main(int argc, char* argv[]) {
  cout << factorial(atoi(argv[1])) << endl;
  return 0;
}
