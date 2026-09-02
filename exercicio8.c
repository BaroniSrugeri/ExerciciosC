#include<stdio.h>

int main()
{
    int vlr1, vlr2;
    int cont = 0;
    int soma = 0;
    float media;

    printf("Digite um valor inteiro inicial: ");
    scanf("%d", &vlr1);
    
    printf("Digite um valor inteiro final: ");
    scanf("%d", &vlr2);
    
    printf("\nValores do intervalo: \n");

    for(int i = vlr1; i <= vlr2; i++){
        printf("%d ", i);
        
        cont = cont + 1;
        soma = soma + i;
    }

    media = soma / cont;


    printf("\nNesse intervalo existem %d numeros, a soma deles e %d e a media e %.2f \n", cont, soma, media);

    return 0;
}