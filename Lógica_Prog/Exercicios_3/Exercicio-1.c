#include <stdio.h>

int main(){
    int num, par;

    printf("Digite um numero: ");
    scanf("%d", &num);

    par = num % 2;

    if (par == 0)
    {
        printf("Par\n");
    }else
    {
        printf("Ímpar\n");
    }
    
    if (num <= -0)
    {
        printf("O numero é negativo!\n");
    }else
    {
        printf("O numero é positivo!\n");
    }
    
    
    return 0;
}