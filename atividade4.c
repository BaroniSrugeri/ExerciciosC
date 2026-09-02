#include<stdio.h>

int main()
{
    char nome1[50], nome2[50], nome3[50];

    printf("Qual o seu primeiro nome?: ");
    scanf("%s", &nome1);
    printf("Qual o seu segundo nome?: ");
    scanf("%s", &nome2);
    printf("Qual o seu ultimo nome?: ");
    scanf("%s", &nome3);

    printf("A juncao do seu nome e: %s %s %s", nome1, nome2, nome3);

    return 0;
}