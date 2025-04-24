/*
10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
*/
#include <stdio.h>

int main(){
    int a,b,c;

    printf("Insira o dia atual:\n");
    scanf("%d", &a);
    printf("Insira o mes atual:\n");
    scanf("%d", &b);
    printf("Insira o ano atual:\n");
    scanf("%d", &c);
    printf("Data informada: %d/%d/%d", a, b, c);

    return 0;
}