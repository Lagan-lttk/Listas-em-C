/*
13) Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas
duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
*/
#include <stdio.h>

int main (){
    char a;

    printf("Digite um caractere:\n");
    scanf("%c", &a);
    printf("Caractere digitado:\"%c\"", a);


    return 0;
}