#include <iostream>

int main(){
  int i;

  for(i=0; i<10; ++i){
    if(i ==5){
      continue;
    }

    std::cout << i << '\n';
  }

  return 0;
}