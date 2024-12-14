'''
 Autor: Luara Munkemer Fornazari 
 Linguagem: python
 Data: 10/12/2024
 Descrição: Programa que serve para ver se a pessoa tem a idade ideal para entrar em um cinema 
 Funcionalidades: ver se a pessoa tem umda idade adequada para entrar em um cinema 
 Versão: [1.0]
'''

def main():
    # Cria uma lista para armazenar os nomes
    nomes = []

    # Um loop para executar duas vezes
    for i in range(2):
        # Solicita ao usuário o nome e o armazena na lista
        nome = input("Digite seu nome: ")
        nomes.append(nome)  # Adiciona o nome à lista de nomes

        # Solicita ao usuário a idade
        idade = int(input("Digite sua idade: "))  # Converte a entrada para um número inteiro

        # Verifica se a idade é 12 ou mais para determinar se pode ir ao cinema
        if idade >= 12:
            print(f"{nomes[i]} pode ir ao cinema")  # Exibe mensagem se a pessoa pode ir ao cinema
        else:
            print(f"{nomes[i]} não pode ir ao cinema")  # Exibe mensagem se a pessoa não pode ir

# Chama a função main para executar o programa
main()