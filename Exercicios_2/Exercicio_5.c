#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um numero:");
    scanf("%d", &num);

    if (num > 20)
    {
        printf("Numero maior que 20");
    }else if (num < 20)
    {
        printf("Numero menor que 20");
    }else
    {
        printf("Numero igual a 20");
    }


    return 0;
}
