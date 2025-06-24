#ifndef ENTRADASAIDA_H
#define ENTRADASAIDA_H

#include <iostream>
#include "Doador.h"
#include "Doacao.h"
#include "Racao.h"
#include "PorteAnimal.h"
#include "MarcaRacao.h"
#include "Animal.h"

using namespace std;

class EntradaSaida {
private:

    string menuDoador(){
        string nome;
        cout << "Insira o nome do doador: ";
        cin >> nome;
        return nome;
    }
    
    int novoDoador(){
        int opcao;
        cout << "Cadastrar novo doador?" << "\n";
        cout << "1 - SIM" << "\n";
        cout << "2 - NAO" << "\n";
        cin >> opcao;
        return opcao;
    }
    
    //juntar menuDoador e novoDoador
    //talvez criar uma funcao só e passar de parametro oq queremos cadastrar de novo

    int menuPorte(){
        int opcao;
        cout << "Qual é o porte do animal?" << "\n";
        cout << "1 - PEQUENO" << "\n";
        cout << "2 - MEDIO" << "\n";
        cout << "3 - GRANDE" << "\n";
        cin >> opcao;
        return opcao;
    }
    
    int novoPorte(){
        int opcao;
        cout << "Cadastrar novo porte?" << "\n";
        cout << "1 - SIM" << "\n";
        cout << "2 - NAO" << "\n";
        cin >> opcao;
        return opcao;
        
    }

    int menuAnimal(){
        int opcao = 0;
        cout << "Qual é o animal?" << "\n";
        cout << "1 - GATO" << "\n";
        cout << "2 - CACHORRO" << "\n";
        cout << "3 - PÁSSARO" << "\n";
        cout << "4 - PEIXE" << "\n";
        cout << "5 - COBRA" << "\n";
        cin >> opcao;
        return opcao;
    }
    
    int novoAnimal(){
        int opcao;
        cout << "Cadastrar novo animal?" << "\n";
        cout << "1 - SIM" << "\n";
        cout << "2 - NAO" << "\n";
        cin >> opcao;
        return opcao;
    }

    int menuRacao(){
        int opcao = 0;
        cout << "Qual é a ração?" << "\n";
        cout << "1 - Marca Ecopet" << "\n";
        cout << "2 - Marca Golden" << "\n";
        cout << "3 - Marca Optimum" << "\n";
        cout << "4 - Marca Pedigree" << "\n";
        cout << "5 - Marca Premium" << "\n";
        cin >> opcao;
        return opcao;
    }
    
    int novaRacao(){
        int opcao;
        cout << "Cadastrar nova racao?" << "\n";
        cout << "1 - SIM" << "\n";
        cout << "2 - NAO" << "\n";
        cin >> opcao;
        return opcao;
    }

    float menuQtd(){
        float qtd;
        cout << "Quanta ração será doada?" << "\n";
        cin >> qtd;
        return qtd;
    }
    
    int novaQtd(){
        int opcao;
        cout << "Cadastrar nova quantidade?" << "\n";
        cout << "1 - SIM" << "\n";
        cout << "2 - NAO" << "\n";
        cin >> opcao;
        return opcao;
    }
};

#endif