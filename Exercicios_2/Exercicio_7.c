#include <stdio.h>

int main(){
    char nome[30];
    int idade;

    printf("Qual o seu nome? ");
    scanf ( "%[^\n]", nome);

    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
    }else
    {
        printf("Menor de idade!");
    }
    
    return 0;
}
