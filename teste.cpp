#include<iostream>
#include<string>
struct CampeonatosCopa{
  int ano; 
  std::string campeao;

};

int main(){
  CampeonatosCopa copa[5] = {
    {2022, "argentina"},
    {2018, "França"},
    {2014, "alemanha"},
    {2010, "espanha"},
    {2006, "italia"}
  };
  std::cout<<"=== Campeoes da Copa ==="<<std::endl; 
  std::cout<<std::endl; 

for(int i = 0; i < 5; i++ ){
  std::cout<<copa[i].ano<<" - Campeao: "<<copa[i].campeao<<std::endl; 
}
 
  return 0; 

}