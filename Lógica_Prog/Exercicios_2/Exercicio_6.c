#include <stdio.h>

int main(){
    int ano_pessoa;
    
    printf("Digite o seu ano de nascimento:");
    scanf("%d", &ano_pessoa);

    if (ano_pessoa < 2022 && ano_pessoa > 1900)
    {
        printf("Sua idade é de: %d ano(s)", 2022 - ano_pessoa);
    }else
    {
        printf("Digite um ano válido!");
    }

    return 0;
}
