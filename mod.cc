#include <iostream>


int main(){
  int i, r[2^10], u[2^10], v[2^10], q;
  unsigned long long int a, n;
  std::cout << "法nにおけるaの逆元" << '\n';
  std::cout << "a n" << '\n';
  std::cin >> a >> n;

  r[0] = n;
  r[1] = a;

  u[0] = 1;
  u[1] = 0;

  v[0] = 0;
  v[1] = 1;
  i=2;
  while(1==1){
    q = r[i-2]/r[i-1];
    r[i] = r[i-2]%r[i-1];
    if(r[i] == 0)break;

    u[i] = u[i-2]-q*u[i-1];
    v[i] = v[i-2]-q*v[i-1];

    i++;
  }
  std::cout << "u" << u[i-1] <<'\n';
  std::cout << "v" << v[i-1]<< '\n';
  std::cout << "d" <<  r[i-1]<< '\n';


  return 0;
}
