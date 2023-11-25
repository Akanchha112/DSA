#include <cmath>
#include <iostream>

int NthRoot(int n, int m) {
  // Write your code here.
  int start = 0, end = m;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (pow(mid, n) == m) {
      return mid;
    } else if (pow(mid, n) < m) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return -1;
}

int main() {
  // Test cases
  std::cout << "Test Case 1: NthRoot(2, 4) -> " << NthRoot(2, 4) << std::endl; // Expected output: 2
  std::cout << "Test Case 2: NthRoot(3, 27) -> " << NthRoot(3, 27) << std::endl; // Expected output: 3
  std::cout << "Test Case 3: NthRoot(2, 8) -> " << NthRoot(2, 8) << std::endl; // Expected output: -1 (no exact integer root)
  std::cout << "Test Case 4: NthRoot(4, 16) -> " << NthRoot(4, 16) << std::endl; // Expected output: 2

  return 0;
}
