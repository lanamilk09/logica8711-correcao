#include<iostream>
#include<string>

int main(){
  std::string time1, time2; 
  int gols1, gols2; 

  std::cout<<"====== comparador de placar ========"<<std::endl; 
  std::cout<<std::endl; 

  std::cout<<" Time 1: ";
  std::cin>>time1; 
  std::cout<<"gols time 1: ";
  std::cin>>gols1; 

  std::cout<<" Time 2: "; 
  std::cin>>time2; 
  std::cout<<"gols time 2: ";
  std::cin>>gols2; 

  std::cout<<std::endl; 
  std::cout<<"========== resultado ========="; 
  std::cout<<time1<<" "<<gols1<<" x "<<gols2<<" "<<time2<<std::endl;
  std::cout<<std::endl; 

if( gols1 > gols2){
  std::cout<<"O time 1 ganhou! "<<std::endl; 


}
else if(gols2 > gols1){
  std::cout<<" O time 2 ganhou! "<<std::endl;  

}
else{
  std::cout<<" empate! "<<std::endl; 
}
  return 0; 

}