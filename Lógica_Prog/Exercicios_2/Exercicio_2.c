#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite dois numeros:");
    scanf("%d %d", &num1, &num2);

    if (num1 != num2)
    {
        printf("%d\n%d", num1, num2);
    }else{
        printf("Números iguais!");
    }

    return 0;
}
