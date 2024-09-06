#include <iostream>
using namespace std;

bool isPrime(int n) {
  //* we can run the loop only till: sqrt(n)
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  if (isPrime(n)) {
    cout << "Number is prime";
  } else {
    cout << "Number is NOT prime";
  }
}