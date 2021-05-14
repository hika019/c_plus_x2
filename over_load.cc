#include <iostream>

void Print(int x){
  std::cout << "int:" << x << '\n';
}

void Print(double x){
  std::cout << "double: "<< x << '\n';
}

int main() {
  Print(5);
  Print(8.23);
  return 0;
}
