#include <stdio.h>

int main()
{
    char nome[50], raca[50];

    printf("Digite o nome do seu pet: ");
    scanf("%s", nome); 
    
    printf("Digite a raca do seu pet: ");
    scanf("%s", raca);
    

    for(int i = 1; i <= 15; i++) {
        printf("%d - O Pet %s e um %s.\n", i, nome, raca);
    }
      
    return 0;
}