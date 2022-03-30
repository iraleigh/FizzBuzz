#include <iostream>

using namespace std;

void fizzbuzz(int n) {
  for (int i = 1; i <= n; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % 3 == 0) {
      cout << "Fizz" << endl;
    } else if (i % 5 == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
}

void fizzbuzzrec(int n) {
  if (n == 0) return;

  fizzbuzzrec(n-1);

  if (n % 5 == 0 && n % 3 == 0) {
    cout << "FizzBuzz" << endl;
  } else if (n % 3 == 0) {
    cout << "Fizz" << endl;
  } else if (n % 5 == 0) {
    cout << "Buzz" << endl;
  } else {
    cout << n << endl;
  }
}

int main() {
  fizzbuzzrec(15);
}