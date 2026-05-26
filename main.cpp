#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>

void escolherModalidade(){
    std::cout << " ---- Selecione a modalidade procurada " << std::endl;
    std::cout << " digite 1 para modelos de aula presenciais e 2 para aulas EAD: " << std::endl;
}

void escolherCurso(){
    std::cout << "Temos disponiveis as seguintes classes: " << std::endl;
    std::cout << "Enfermagem, Modelagem, Desenvolvimento de Sistemas. " << std::endl;
    std::cout << " Digite 1 para o curso de enfermagem, digite 2 para o curso de modelagem, digite 3 para o curso de desenvolvimento de sistemas: " << std::endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);//<-esse também
    SetConsoleCP(CP_UTF8);//e esse também


    std::string nomeCompleto;   //
    std::string cpf;            //
    std::string rg;             //
    float DataNascimento; //
    std::string endereço;       //
    std::string email;          //
    int idade;
    std::string telefone;
    std::string CEP;
    std::string nomeResponsavel;
    std::string telefoneResponsavel;
    std::string cpfResponsavel;
    int opcao;
    int choice;
    int opcaoEad;
    float valorCurso;
    int parcelas;
    int opcaoPagamento;
    float desconto;
    float descontoConvênio;

    void cadastro(){
        std::cout<<" Para prosseguirmos, por favor informe os seguintes dados: Nome Completo: "<<std::endl;
        std::cin>>nomeCompleto;
        std::cout<<"Informe seu Email: "<<std::endl;
        std::cin>>email;
        std::cout<<" Informe seu CPF: "<<std::endl;
        std::cin>>cpf;
        std::cout<<"Informe seu RG: "<<std::endl;
        std::cin>>rg;
        std::cout<<" Informe sua data de nascimento: "<<std::endl;
        std::cin>>dataNascimento;    
    }

    escolherModalidade();
    std::cin >> opcao;

    if (opcao == 1){
        escolherCurso();
        std::cin >> choice;

        switch (opcao)
        {
        case 1:
            valorCurso = 15.278, 98;
            parcelas = 40;
            std::cout << " Nosso curso de enfermagem oferece aulas práticas com situações do cotidiano e materiais didáticos. Contendo 1600 horas de duração total. Horários de manha, a tarde e a noite. Cinco vezes por semana.Valor total: R$15.278,79. Formas de pagamento: Boleto: 40x; Cartão Master: 21x; Cartão Visa: 24x. " << std::endl;
            break;
        case 2:
            valorCurso = 14.844, 79;
            parcelas = 28;
            std::cout << " Nosso curso de modelagem conta com aulas práticas voltadas ao aperfeicoamento para a área de trabalho. O curso conta com horarios a tarde e a noite, duracao de 3 horas e 800 horas totais de curso.Valor total: R$14.844,79 Formas de pagamento: Boleto: 28x; Cartão Master: 21x; Cartão Visa: 24x." << std::endl;
            break;
        case 3:
            valorCurso = 14.805, 49;
            parcelas = 30;
            std::cout << "Nosso curso de desenvolvimento de sistemas disponibiliza computadores, aulas de aperfeicoamento e entendimento bilingue. Contando com 1216 horas de aula (totais) e sendo realizada 5 vezes por semana á noite.Valor total: R$14.805,49. Formas de pagamento: Boleto: 30x; Cartão Master: 21x; Cartão Visa: 24x." << std::endl;
            break;
        default:
            std::cout << "numero inavlido!" << std::endl;
        }
    }else{

    switch (opcaoEad)
    {
    case 1:
        valorCurso = 3.555, 00;
        parcelas = 22;
        std::cout << " O curso de RH tem uma duração de 800 horas. Valor total de: R$ 3.555,00. em até 22x." << std::endl;
        break;
    case 2:
        valorCurso = 3.571, 00;
        parcelas = 22;
        std::cout << " O curso de Logistica tem uma duração de 800 horas. Valor total de: R$3.571,00 em até 22x." << std::endl;
        break;
    case 3:
        valorCurso = 3.555, 00;
        parcelas = 22;
        std::cout << " O curso de contabilidade tem uma duração de 800 horas. Valor Total de: R$3.355,00 em até 22x" << std::endl;
        break;
    case 4:
        valorCurso = 3.157, 00;
        parcelas = 22;
        std::cout << " O curso de Transiço~es mobiliarias tem uma duração de 800 horas. Valor total de : R$3.157,00" << std::endl;
        break;
    default:
        std::cout << " Numero invalido!" << std::endl;
    }
    }
    std::cout << " selecione a forma de pagamento: " << std::endl;
    std::cout << "À vista temos 10% de desconto!" << std::endl;
    std::cout << "No cartão temos 6% de desconto! Sem juros: 24x no cartão visa ou 21x no cartão Master. " << std::endl;
    std::cout << " Se tiver algum tipo de convênio (unimed,DoctorClean,Vivo,Bourbon,Sicred) pode receber até 10% de desconto" << std::endl;
    std::cout << "1- boleto, 2- À vista(débito ou dinheiro), 3- crédito, 4- pix:  " << std::endl;
    std::cin >> opcaoPagamento;

    if (opcaoPagamento == 2 || opcaoPagamento == 4)
    {
        desconto = valorCurso * 0.90;
        std::cout << " O valor total do desconto é de: " <<std::endl;
    }
    else if (opcaoPagamento == 3)
    {
        desconto = valorCurso * 0, 94;
        std::cout << "O valor do curso fica: " << desconto << " já com o desconto." << std::endl;
    }
    else if (opcaoPagamento == 1)
    {
        std::cout << "O valor do curso fica: " << valorCurso << " em até " << parcelas << "x." << std::endl;
    }
    else
    {
        std::cout << " A opção selecionada é inválida! " << std::endl;
    }



    return 0;
}