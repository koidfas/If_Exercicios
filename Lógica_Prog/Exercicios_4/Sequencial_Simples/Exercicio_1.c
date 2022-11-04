#include <stdio.h>

int main(){
    float metros;
    
    printf("Digite um valor em metros para a conversão: ");
    scanf("%f", &metros);

    printf("O valor em metros %.1f ficou em:\n");
    printf("Decímetros: %.1f\n", metros * 10);
    printf("Centímetros: %.1f\n", metros * 100);
    printf("Milímetros: %.1f\n", metros * 1000);


    return 0;
}