import 'dart:io';

difference(int a, int b) {
  return a - b;
}

void main() {
  stdout.write("Enter 1st number: ");
  int a = int.parse(stdin.readLineSync().toString());
  stdout.write("Enter 2nd number: ");
  int b = int.parse(stdin.readLineSync().toString());
  int ans = difference(a, b);
  if (ans < 0) {
    ans *= -1;
  }
  print("Difference between $a and $b is $ans");
}
