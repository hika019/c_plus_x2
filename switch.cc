#include <iostream>

int main(){
  int i;

  for(i=0; i<5; ++i){
    switch (i) {
      default:
        break;
      case 2:
        std::cout << "x:2" << std::endl;
      case 3:
        std::cout << "x:3" << std::endl;
    }

  }


  return 0;
}
