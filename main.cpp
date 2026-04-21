#include <iostream>


int main(){
 int quantidade; 
 do{
 std::cout<<"Digite a quantidade em estoque (Deve ser maior que 0): "<<std::endl;
 std::cin>>quantidade;
 }
while(quantidade <= 0 );

std::cout<<"estoque Atualizado: "<<quantidade<<" unidades. "<<std::endl;





    return 0;
 }