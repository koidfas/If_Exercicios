#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
    float salmensal, reajuste;
    printf("Digite o seu salario mensal:");
    scanf("%f", salmensal);
    reajuste = salmensal + (salmensal * 0.325);
    printf("O seu salario foi reajustado para %f", reajuste);


}
