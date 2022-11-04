#include <stdio.h>

int main(){
    int num, resto;

    printf("Digite um numero:");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 0)
    {
        printf("O numero é par!");
    }else{
        printf("O numero é ímpar!");
    }

    return 0;
}
