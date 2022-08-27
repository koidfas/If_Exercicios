#include <stdio.h>

int main(){
    float chave = 1.3,anos=0,gira=2.1;

    do
    {
        gira = gira + 0.2;
        chave = chave + 0.3;
        anos++; 
    } while (chave <= gira);

    printf("Anos: %f",anos);


    return 0;
}