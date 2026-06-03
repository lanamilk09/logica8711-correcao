#include<iostream>
#include<string> 

struct aluno{
  std::string nome; 
  float nota1; 
  float nota2; 

}; 
float calcularmedia(aluno a){
  return(a.nota1 + a.nota2) / 2; 

}

int main(){

  aluno aluno = {"Paulo", 8.0, 9.5}; 
  float media = calcularmedia(aluno);

  std::cout<<aluno.nome<<" - media: "<<media<<std::endl; 
}
