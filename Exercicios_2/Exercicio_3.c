#include <stdio.h>

int main(){
    int num, resto;

    printf("Digite um numero para saber se é divisivel por 5:");
    scanf("%d", &num);

    resto = num % 5;

    if (resto == 0)
    {
        printf("É divisivel por 5!");
    }else
    {
        printf("Não é divisivel por 5!");
    }

    return 0;
}
