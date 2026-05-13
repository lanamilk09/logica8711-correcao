#include<iostream>
#include <string>

double saldo = 1000.0;
std::string titular = "Alana! "; 

void exibirSaldo(){
    std::cout<<titular<<"--- Saldo: R$ "<<saldo<<std::endl;
    }


    void depositar(double valor){
        if(valor>0){
        saldo+=valor;
        std::cout<<"deposito realizado com sucesso!"<<std::endl;

    }else{
        std::cout<<" Valor invalido! "<<std::endl;
    }
    }
    void sacar(double valor){
        if(valor > 0 && valor <= saldo){
            saldo -= valor;
            std::cout<<"Saldo insuficiente ou valor invalido! "<<std::endl;
        }
    }

    void exibirMenu(){
        std::cout<<"\n === MENU CONTA BANCARIA ===="<<std::endl;
        std::cout<<"1- ver saldo "<<std::endl;
          std::cout<<"2- Deposito "<<std::endl;
            std::cout<<"3- Sacar "<<std::endl;
              std::cout<<"4- sair "<<std::endl;
                std::cout<<" Digite uma opcao: ";
    }

    int main(){
        int opcao;
        double valor; 

            do{
                exibirMenu();
                std::cin>>opcao;

                switch (opcao){
                    case 1: 
                    exibirSaldo();
                    break;

                    case 2: 
                    std::cout<<"Digite o valor a depositar: "<<std::endl;
                    std::cin>>valor; 
                    depositar(valor);
                    break;

                    case 3: 
                    std::cout<<"Digite o valor a sacar: ";
                    std::cin>>valor;
                    sacar(valor);
                    break;

                    case 4: 
                    std::cout<<"SAindo da conta..."<<std::endl;
                    break; 

                    default: 
                    std::cout<<"opcao invalida! "<<std::endl;



                }
            }while(opcao!=4);



    }