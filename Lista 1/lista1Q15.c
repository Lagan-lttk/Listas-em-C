/*
15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as
de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma
em cada linha. Use um único comando printf() para cada operação de escrita das três
variáveis
*/
#include <stdio.h>

int main(){
    char caractere;
    int numero;
    float Nracional;

    printf("Escreva um caractere:\n");
    scanf("%c", &caractere);
    printf("Escreva um numero inteiro:\n");
    scanf("%d", &numero);
    printf("Escreva um numero racional:\n");
    scanf("%f", &Nracional);
    printf("Valores informados separados por Espaco: %c %d %f\n", caractere, numero, Nracional);
    printf("Valores informados separados por Tabulacao Horizontal: \t%c \t%d \t%f\n", caractere, numero, Nracional);
    printf("Valores informados separados por Linhas:\n%c \n%d \n%f", caractere, numero, Nracional);

    return 0;
}