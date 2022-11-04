#include <stdio.h>

int main(){
    double fah_to_cel;

    printf("Digite a temp em fahrenheit para converter para Celsius:");
    scanf("%lf", &fah_to_cel);

    printf("A temp %.2lf F ficou %.2lf em celsius.\n", fah_to_cel, (fah_to_cel - 32)/1.8);


    return 0;
}