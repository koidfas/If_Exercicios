#include <stdio.h>

int main(){
    int ano_carro;
    float preco_tabela;

    printf("Qual o ano do seu carro? ");
    scanf("%d", &ano_carro);
    printf("Quanto é o preço tabela do seu carro? ");
    scanf("%f", &preco_tabela);

    if (ano_carro > 1990)
    {
        printf("Valor do imposto: R$ %.2f", preco_tabela * 0.15);
        return 0;
    }else if (ano_carro <= 1990)
    {
        printf("Valor do imposto: R$ %.2f", preco_tabela * 0.10);
        return 0;
    }

    return 0;
}
