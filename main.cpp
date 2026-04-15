#include<iostream>


int main(){

 int opçao; 

 std::cout<<"digite um valor para a opção: "<<std::endl;
 std::cin>>opçao;
 switch(opçao){
  case 1:

    std::cout<<"Domingo!"<<std::endl;
    break;
  case 2:   

    std::cout<<"Segunda Feira!"<<std::endl;
    break; 

  case 3:

  std::cout<<" Terça feira! "<<std::endl;
  break;

  case 4: 
  std::cout<<"quarta feira!"<<std::endl;
  break;

  case 5: 
  std::cout<<"quinta feira!"<<std::endl;
  break;

  case 6:

  std::cout<<"sexta feira!"<<std::endl;
  break; 
 
 case 7: 
 std::cout<<"sábado!"<<std::endl; 
 break;




  default:

  std::cout<<" Número inválido!"<<std::endl;

 }
     
    return 0;
}