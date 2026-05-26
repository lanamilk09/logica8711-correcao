#include<iostream>
int main(){
int numero; 
int contador = 0; 
while(true){
   std::cout<<"digite um numero (0 para parar): "; 
   std::cin>>numero; 
   if(numero == 0){
      break;
   }
   contador++;
}
std::cout<<"voce digitou"<<contador<<"numeros!"<<std::endl;
return 0; 


}