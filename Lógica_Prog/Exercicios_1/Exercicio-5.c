#include <stdio.h>

int numero1 , numero2;
int multi, divisao;



main(){

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:");
    scanf("%d", &numero2);
    multi = numero1 * numero2;
    divisao = numero1 / numero2;
    printf("A multiplicação desses numeros eh: %d \nE a divisao eh: %d", multi , divisao);




}
