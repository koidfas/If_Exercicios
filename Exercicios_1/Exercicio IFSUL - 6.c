#include <stdio.h>

int ler_num;
double divisao;


main(){
    printf("Digite um numero para imprimir a sua terça parte:");
    scanf("%d", &ler_num);
    divisao = ler_num * 0.33333;
    printf("O numero %d tem como sua terça parte: %f", ler_num, divisao);




}
