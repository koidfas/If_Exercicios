#include <stdio.h>

int main(){
    char sexo;
    float h;

    printf("Digite seu sexo(M ou F): ");
    scanf ( "%c", &sexo);

    printf("Digite a sua altura: ");
    scanf("%f", &h);

    switch (sexo)
    {
    case 'M':
        printf("Seu peso ideal é de: %.2f", (72.7 * h) - 58);
        break;
    
    case 'F':
        printf("Seu peso ideal é de: %.2f", (62.1 * h) - 44.7);
        break;

    default:
        printf("Digite um sexo válido!");
        break;
    }


    return 0;
}
