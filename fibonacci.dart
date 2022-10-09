import 'dart:io';

fibonacci(int a) {
  if (a <= 1) {
    return a;
  }
  return fibonacci(a-1) + fibonacci(a - 2);
}

void main() {
  stdout.write("Enter a no.: ");
  int a = int.parse(stdin.readLineSync().toString());
  int ans = fibonacci(a);
  print(ans);
}