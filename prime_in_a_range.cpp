#include <iostream>
using namespace std;
int main() {
  int i, n1, n2;
  cin >> n1 >> n2;
  for (int num = n1; num < n2; num++) {
    for (i = 2; i < num; i++) {
      if (num % i == 0) {
        break;
      }
    }
    if (i == num) {
      cout << num << " is a prime number\t";
    }
  }
}
