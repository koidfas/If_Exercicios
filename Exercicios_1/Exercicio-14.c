#include <stdio.h>

int main(){
    double valor;
    
    printf("Digite o valor da conta:");
    scanf("%lf", &valor);

    printf("O total final do valor fico de: R$ %.2lf", (valor * 0.1) + valor);


    return 0;
}
