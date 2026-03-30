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
   std::cout<<(a >= b )<<std::endl;
   std::cout<<(a != b)<<std::endl;


    return 0; 

}

