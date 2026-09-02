#include<stdio.h>

int main()
{
    int vlr1, mult;

    printf("Digite a tabuada deseja ver: ");
    scanf("%d", &vlr1);

    printf("Tabuada do %d: \n", vlr1);
    
    for(int i = 1; i<=10; i++){

        mult = vlr1*i;


        printf("%d * %d = %d \n", vlr1, i, mult);

    }

    return 0;
}