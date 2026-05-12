#include<iostream>

int main(){
 int num1, num2, soma, subt, mult;
 int op;
 float div;
 std::cout<<"Digite aqui um valor para o numero 1: "<<std::endl;
 std::cin>>num1;
 std::cout<<"Digite aqui um valor para o numero 2: "<<std::endl;
 std::cin>>num2;

 soma = num1 + num2;
 subt= num1 - num2;
 mult= num1 * num2;
 div = num1 / num2;
 std::cout<<" -------- Escolha a operação -------"<<std::endl;
 std::cout<<" 1- soma ";
 std::cout<<" 2- subtração "; 
 std::cout<<" 3- nultiplicação  ";
std::cout<<"4- divisão ";
std::cin>>op;

switch (op){
    case 1:
    soma = num1 + num2;
    std::cout<<" O resultado da soma é: "<<soma<<std::endl;
    break;
    case 2 :
     subt= num1 - num2;
    std::cout<<" O resultado da subtração é: "<<subt<<std::endl;
    break;
    case 3 :
    mult= num1 * num2;
    std::cout<<" O resultado da multiplicação é: "<<mult<<std::endl;
    break;
    case 4:
    div = num1 / num2;
    std::cout<<" O resultado da divisão é: "<<div<<std::endl;
    break;

    default:
    std::cout<<" Você não inseriu nenhum valor valido! "<<std::endl;

}

    

    return 0;
}