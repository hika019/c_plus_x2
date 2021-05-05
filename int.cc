#include <iostream>

int main(){
  //read only
  const int x=5;

  //定数
  constexpr int y=10;

  auto s = "Hello";

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << s << '\n';
  return 0;
}
