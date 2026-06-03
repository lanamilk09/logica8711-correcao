#include<iostream>
#include<string> 

struct aluno{
  std::string nome; 
  float nota; 
 

}; 


int main(){

  aluno alunos[3]={
    {"henrique", 8.5},
    {"Paula", 9.6},
    {"Juliana", 7.0}
  }; 
 for(int i = 0; i < 3; i++ ){
  std::cout<<alunos[i].nome<<" : "<<alunos[i].nota<<std::endl; 
 }

return 0; 
}
