#include <stdio.h>

float prestacao, valor, taxa;

main(){
    printf("Digite o valor da compra em R$ e o juros de atras:");
    scanf("%f %f", &valor, &taxa);
    prestacao = valor + (valor * (taxa/100));
    printf("O valor da prestação deu R$%f", prestacao);

}
