/*
* Autor: Luara Munkemer Fornazari 
* Linguagem:C
* Data: 10/12/2024
* Descrição: Programa que serve para ver se a pessoa tem a idade ideal para entrar em um cinema 
* Funcionalidades: ver se a pessoa tem umda idade adequada para entrar em um cinema 
* Versão: [1.0]
*/ 
#include <stdio.h>

int main() { // Inicia o programa
    int idade; // Armazena a idade
    char nome[21]; // Armazena o nome da pessoa, não passa de 20 caracteres

    for (int i = 0; i < 2; i++) { // Laço para repetição
        printf("Qual seu nome: "); // Exibe uma mensagem pedindo nome
        scanf("%20s", nome); // Lê o nome dado

        printf("Qual a sua idade: "); // Exibe uma mensagem pedindo idade
        scanf("%d", &idade); // Lê a idade dada

        if (idade >= 12) { // Faz uma decisão dependendo das respostas dadas anteriormente
            printf("%s, pode ir ao cinema!\n", nome); // Exibe uma resposta se a pessoa pode ir ao cinema
        } else {
            printf("%s, não pode ir ao cinema.\n", nome); // Exibe outra resposta se a pessoa não pode ir
        }
    }

    return 0; // Finaliza o programa
}