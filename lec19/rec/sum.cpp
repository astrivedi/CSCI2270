#include <iostream>
using namespace std;

long sum(long n) {
  if (n == 0) {
    return 0;
  }
  else {
    return n + sum(n - 1);
  }
}

int main(int argc, char* argv[]) {
  cout << sum(atoi(argv[1])) << endl;
  return 0;
}
