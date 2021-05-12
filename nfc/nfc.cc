#include "felica.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(){
  if(!initialize_library()){
    std::cout << "Library initialization failed." << '\n';
    return 1;
  }

  return 0;
}
