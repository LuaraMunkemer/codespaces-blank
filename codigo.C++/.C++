/*
* Autor: Luara Munkemer Fornazari 
* Linguagem: C++ 
* Data: 10/12/2024
* Descrição: Programa que serve para ver se a pessoa tem a idade ideal para entrar em um cinema 
* Funcionalidades: ver se a pessoa tem umda idade adequada para entrar em um cinema 
* Versão: [1.0]
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() { //inicia o programa
    int I; //armazena I ou seja idade

    char nome[21]; //armazena o nome da pessoa

    for (int i = 0; i < 2; i++) { //laço para haver uma repetição
        cout<<"Qual seu nome: "; //exibe uma mensagem pedindo nome
        cin.getline(nome, 21); //lê o nome dado, garantindo que não passe de 20 caracteres

        cout<<"Qual a sua idade: "; //exibe uma mensagem pedindo idade
        cin>>I; //lê a idade dada 

        if (I >= 12) { //faz uma decisão dependendo das respostas dadas anteriormente
            cout<<nome<<", pode ir ao cinema!\n"; //exibe uma dada resposta 
        } else {
            cout<<nome<< ", não pode ir ao cinema.\n"; //exibe outra resposta diferente da primeira
        }

      
    }

    return 0; //finaliza o programa
}