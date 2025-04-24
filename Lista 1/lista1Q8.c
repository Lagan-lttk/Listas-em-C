/*
8) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa
em que eles foram lidos.
*/
#include <stdio.h>

int main(){
    int a,b;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    printf("Valor invertidos: %d%d", b, a);

    return 0;
}