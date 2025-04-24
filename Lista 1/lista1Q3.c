/*
3) Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor
lido:”, seguido do valor inteiro. Use apenas um comando printf().
*/
#include <stdio.h>
int main (){
    
    int n;

    scanf("%d", &n);
    printf("Valor informado: %d",n);

    return 0;
}