#include <iostream>
#include <string>

int main(){
 int num;

std::cout<<"Digite um número: "<<std::endl;
std::cin>>num;

 std::cout<<num%2<<std::endl;
 if( num % 2 == 0){
   std::cout<<"par"<<std::endl;
 }else{ 
   std::cout<<"impar"<<std::endl;
 }

    return 0;
 }