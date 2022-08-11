#include <stdio.h>

int main(){
    double cel_to_fah;

    printf("Digite a temp em Celsius para converter para fah:");
    scanf("%lf", &cel_to_fah);

    printf("A temp %.2lf C ficou %.2lf em celsius.\n", cel_to_fah, (cel_to_fah * 1.8) + 32);


    return 0;
}