#include <iostream>
using namespace std;

long sum(long n, long s =0) {
  if (n == 0) {
    return s;
  }
  else {
    return sum(n - 1, s+n);
  }
}

int main(int argc, char* argv[]) {
  cout << sum(atoi(argv[1])) << endl;
  return 0;
}
