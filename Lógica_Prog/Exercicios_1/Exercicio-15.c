#include <stdio.h>
#include <math.h>

int main(){
    double raio, pi=3.14159265358979323846;

    printf("Digite o raio para o cálculo da area do círculo:");
    scanf("%lf", &raio);

    printf("Area do círculo: %.3lf m²", pi * (raio * raio));


    return 0;
}
