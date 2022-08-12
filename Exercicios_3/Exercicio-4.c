#include <stdio.h>

int main(){
    int r=0; 
do
{
    int i=0, num=0;
    if (num > 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);        
        i++;
        num = num + num;
    }else
    {
        r++;
    }
} while (r == 0);

    return 0;
}
