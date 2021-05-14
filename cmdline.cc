#include <iostream>

int main(int argc, char* argv[]){
  int i;

  //argc: コマンドラインの引数の数
  //argc[]: コマンドラインの引数
  for(i=0; i<argc; ++i){
    std::cout << "argv[" << i << "]" << argv[i]<< '\n';
  }
}

//a.exe Hello World
