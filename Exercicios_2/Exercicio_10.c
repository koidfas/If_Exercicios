#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > 0)
    {
        printf("%d\n", num1 * 10);
    }else
    {
        printf("%d\n", num1 * num1);
    }
    
    if (num2 < 0)
    {
        printf("Numero negativo!\n");
    }
    
    if (num3 < num2)
    {
        printf("o num %d - %d = %d\n", num2, num3, num2- num3);
    }else
    {
        printf("%d\n", num3++);
    }
    



    return 0;
}
