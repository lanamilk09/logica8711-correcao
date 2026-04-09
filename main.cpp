#include<iostream>
#include<string>


int main(){


    std::string user;
    std::string senha; 

    std::cout<<" Digite seu usuário de acesso: " <<std::endl; 
    std::cin>>user;

    std::cout<<" Digite sua senha: "<<std::endl; 
    std::cin>>senha; 

if(senha=="1234567"){
    std::cout<<" o usuário "<<user<<" esta logado com sucesso!!"<<std::endl;

}else{
     std::cout<<"usuário ou senha inválidos!"<<std::endl;
}




    return 0;
}