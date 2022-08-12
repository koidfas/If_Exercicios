#include <stdio.h>

int main(){
    int num_total, votos_brancos, votos_válidos;

    printf("Digite o numero total de votos:");
    scanf("%d", &num_total);
    printf("Digite o numero de votos brancos:");
    scanf("%d", &votos_brancos);
    printf("Digite o numero de votos válidos:");
    scanf("%d", &votos_válidos);

    printf("De %d votos %d%% são de votos brancos!\n", votos_brancos ,(votos_brancos * 100) / 100 );
    printf("De %d votos %d%% são de votos válidos!\n", votos_válidos ,(votos_válidos * 100) / 100 );

    return 0;
}