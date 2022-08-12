#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite dois numeros:");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Diferença de %d por %d é igual a: %d", num1, num2, num1 - num2);
    }else if (num2 > num1)
    {
        printf("Diferença de %d por %d é igual a: %d", num2, num1, num2 - num1);
    } else
    {
        printf("Os dois numeros são iguais então ficou: %d", num1 - num2);
    }

    return 0;
}
