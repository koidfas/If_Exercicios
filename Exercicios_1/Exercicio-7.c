#include <stdio.h>

int money, taxa, soma;

main(){

    printf("Digite a quantidade de dinheiro para a operação:");
    scanf("%d", &money);
    taxa = money * 0.08;
    soma = money + taxa;
    printf("O valor%d teve um aumento de 8%% e ficou com %d", money, soma);





}
