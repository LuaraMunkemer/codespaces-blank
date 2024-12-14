
/*
* Autor: Luara Munkemer Fornazari 
* Linguagem: Java 
* Data: 10/12/2024
* Descrição: Programa que serve para ver se a pessoa tem a idade ideal para entrar em um cinema 
* Funcionalidades: ver se a pessoa tem umda idade adequada para entrar em um cinema 
* Versão: [1.0]
*/ import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        java.io.PrintStream out = System.out;
        Scanner scanner = new Scanner(System.in);

        int I = 0;
        String[] N = new String[2];

        for (int i = 0; i < 12; i++){
            out.println("Digite seu nome: ");
            N[i] = scanner.nextLine();

             out.println("Digite sua Idade: ");
            I = scanner.nextInt();


            scanner.nextLine();

            if (I >= 12) {
                System.out.println(N[i] + " pode ir ao cinema ");
            } else {
                System.out.print(N[i] + " não pode ir ao cinema");
            }
        }

        scanner.close();
    }
}