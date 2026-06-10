#include<iostream>
#include<string> 
int main(){
  int idade = 38; 
  std::string resultado = (idade >= 18 ) ? "Maior de idade! " : "menor de idade! "; 
  std::cout<<resultado<<std::endl; 

} 