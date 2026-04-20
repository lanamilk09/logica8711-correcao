#include <iostream>
#include<chrono>
#include<thread> 

int main(){

 int inicio = 5;

 std::cout<<" Ai vai explodir..."<<std::endl;

 for(int i = inicio; i >= 0; i--){
   std::cout<< i <<std::endl;
   std::this_thread::sleep_for(std::chrono::seconds(1));
 }
   std::cout<< "aaaahhhh microondas explodindo"<<std::endl;


    return 0;
 }