/*
7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
*/
#include <stdio.h>

int main (){

    char c;

    printf("Digite um caractere:\n");
    scanf("%c", &c);
    printf("Caractere reescrito em algarismos:%d", c);

    return 0;
}