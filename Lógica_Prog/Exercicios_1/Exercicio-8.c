#include <stdio.h>

int hora, aulas;
float valor_hora, dia, desconto, valor_bruto;

main(){
    printf("Digite o valor/hora e quantas horas trabalha:");
    scanf("%f %d", &valor_hora, &hora);
    dia = valor_hora * hora;
    printf("Quantas aulas foram dadas?");
    scanf("%d", &aulas);
    valor_bruto = dia * aulas;
    desconto = valor_bruto - (valor_bruto * 0.11);
    printf("O seu salário liquido é de: R$%f", desconto);






}
