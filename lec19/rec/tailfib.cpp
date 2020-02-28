#include <iostream>
using namespace std;

long fibonacci(long n, long a = 0, long b = 1)
{
  if (n == 0)
    return a;
  if (n == 1)
    return b;
  return fibonacci(n - 1, b, a + b);
}

int main(int argc, char* argv[]) {
  cout << fibonacci(atoi(argv[1])) << endl;
  return 0;
}
