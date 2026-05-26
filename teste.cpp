#include<iostream>

int quadrado(int n){
   return n * n; 
}
int cubo( int n){
   return n * n * n; 
}
int main(){
std::cout<<"Quadrado de 5: "<<quadrado(5)<<std::endl;
std::cout<<"Quadrado de 8: "<<quadrado(8)<<std::endl;
std::cout<<"Quadrado de 10: "<<quadrado(10)<<std::endl;

std::cout<<"cubo de 2: "<<cubo(2)<<std::endl; 
std::cout<<"cubo de 3: "<<cubo(3)<<std::endl; 

return 0; 

}