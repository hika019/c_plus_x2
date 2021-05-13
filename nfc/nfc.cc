#include "felica.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(){
  if(!initialize_library()){
    std::cout << "Library initialization failed." << '\n';
    return 1;
  }
  if(!open_reader_writer_auto()){
    std::cout << "open_reader_writer_auto failed" << '\n';
    return 1;
  }

  structure_polling polling;
  unsigned char system_code[2] = {0x00, 0x00};
  polling.system_code = system_code;
  polling.time_slot = 0x00;

  unsigned char number_of_cards = 1;
  structure_card_information card_information;
  unsigned char card_idm[8];
  unsigned char card_pmm[8];
  card_information.card_idm = card_idm;
  card_information.card_pmm = card_pmm;

  structure_device_information device_info;
  unsigned char device_info_type;
  unsigned char device_info_connect;
  unsigned char hoge;
  device_info.device_info_type = device_info_type;
  device_info.device_info_connect = device_info_connect;

  if(!get_device_information(&device_info)){
    std::cout << "cant get device info" << '\n';
    return 1;
  }

  std::cout << "device type:" << device_info.device_info_type << '\n';
  std::cout << "device connect:" << device_info.device_info_connect<< '\n';

  

  if (!close_reader_writer()) {
      fprintf(stderr, "Can't close reader writer.\n");
      return 1;
  }

  if (!dispose_library()) {
      fprintf(stderr, "Can't dispose library.\n");
      return 1;
  }

  return 0;
}
