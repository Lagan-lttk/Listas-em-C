/*
6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de
notação científica.
*/
#include <stdio.h>

int main (){

    double n;

    printf("Digite um numero:\n");
    scanf("%lf", &n);
    printf("Numero informado em notacao cientifica:%e", n);

    return 0;
}
