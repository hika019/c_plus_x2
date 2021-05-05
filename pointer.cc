#include <iostream>
void hoge(int& a){
  printf("hoge: %d\n", a);
  a *= 5;
  printf("hoge: %d\n", a);
}

int main(){
  int x = 5;
  int* p = &x;
  int& r =  x;

  std::cout << *p << '\n';
  std::cout << r << '\n';

  std::cout << x << '\n';
  hoge(x);
  std::cout << x << '\n';

  return 0;
}
