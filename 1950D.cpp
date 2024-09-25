#include <iostream>
#include <cmath> // for pow function

using namespace std;

bool isBinaryDecimal(int n) {
  // Handle negative numbers (not binary decimals)
  if (n < 0) {
    return false;
  }

  // Check if each digit is 0 or 1
  while (n > 0) {
    int digit = n % 10;
    if (digit != 0 && digit != 1) {
      return false;
    }
    n /= 10;
  }

  return true;
}

// Check if a number can be expressed as a product of powers of 2
bool canRepresentAsProduct(int n) {
  // If n is 1, it's already a binary decimal
  if (n == 1) {
    return true;
  }

  // If n is even, it can be represented as a product of 2 and another number
  if (n % 2 == 0) {
    return canRepresentAsProduct(n / 2);
  }

  // If n is odd and not a binary decimal, it can't be represented
  return isBinaryDecimal(n);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (canRepresentAsProduct(n)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
