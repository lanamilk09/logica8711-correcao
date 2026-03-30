#include<iostream>
#include<string>
int main(){

   int a; 
   int b; 
   //int a, b; 

   std::cout<<"digite um valor para a: "<<std::endl;
   std::cin>>a;

   std::cout<<"digite um valor para b: "<<std::endl;
   std::cin>>b; 

   std::cout<<(a > b)<<std::endl; 
   //maior que ...
   std::cout<<(a >= b )<<std::endl;
   //maior ou igual a...
   std::cout<<(a != b)<<std::endl;
   //diferente de...
   std::cout<<(a == b)<<std::endl;
   //igual a...



    return 0; 

}

