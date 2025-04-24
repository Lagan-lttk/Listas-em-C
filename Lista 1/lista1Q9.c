/*
8) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa
em que eles foram lidos.
*/
#include <stdio.h>

int main(){
    float a,b;

    printf("Digite dois numeros racionais:\n ");
    scanf("%f %f", &a, &b);
    printf("Numeros em ordem invertida: %f %f", b, a);

    return 0;

}