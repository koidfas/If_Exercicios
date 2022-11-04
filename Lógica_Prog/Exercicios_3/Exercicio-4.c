#include <stdio.h>

int main(){
    float num, soma=0, r=0,i=0;

    do
    {
        printf("Digite um numero: ");
        scanf("%f", &num);
        if (num >= 0)
        {
            soma = soma + num;
            i++;
        }else 
        {
            r++;
        }
             
    } while (r < 1); // executa só quando o args for negativo 
    
    printf("Média dos valores digitados: %.2f\n", (soma/i));
    return 0;
}
