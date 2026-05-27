#include<iostream>

bool ehprimo(int numero){
   if(numero <= 1){
         return false; 
      }
      for(int i = 2; i < numero; i++){
         if(numero % i == 0){
            return false; 
         }
      }
      return true; 
   }

   int main(){
      int numero; 
      std::cout<<"Digite um numero: "<<std::endl; 
      std::cin>>numero; 
      

      if(ehprimo(numero)){
         std::cout<<numero<<" eh primo! "<<std::endl;
      }else{
         std::cout<<"Não é primo! "<<std::endl; 
      }
      return 0;
   }
