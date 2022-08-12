#include <stdio.h>

int main(){
    int par;
    
    for (int i = 0; i < 100; i++)
    {
        par = (i + 1) % 2;
        if (par == 0)
        {
            printf("%d - Par\n", i + 1);
        }else{
            printf("%d - Ímpar\n", i + 1);
        }
            
    }
    




    return 0;
}
