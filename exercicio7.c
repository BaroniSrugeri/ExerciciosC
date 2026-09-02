#include <stdio.h>

int main()
{
    int vlr1, vlr2;

    printf("Defina um valor inicial: ");
    scanf("%d", &vlr1);
    
    printf("Defina um valor final: ");
    scanf("%d", &vlr2);

    for(int i = vlr1; i <= vlr2; i++) {

        if (i % 2 == 0) {
            printf("%d - o valor e PAR\n", i);
        } 

        else {
            printf("%d - o valor e IMPAR\n", i);
        }
    }

    return 0;
}