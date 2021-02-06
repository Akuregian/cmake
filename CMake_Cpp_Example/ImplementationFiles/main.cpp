#include<iostream>
#include "../HeaderFiles/Technology.h"
#include "../HeaderFiles/Computer.h"

int main(){
  
  std::unique_ptr<Technology> tech(new Technology); 
  std::unique_ptr<Computer> computer(new Computer); 

  tech->DeviceType();
  computer->DeviceType();

}
