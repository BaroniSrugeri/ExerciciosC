#include <stdio.h>

int main()
{
    char nome[30];
    float sal_bruto, sal_liq, sal_final, desc, vale, emprestimo;

    printf("Qual seu nome?: ");
    scanf("%s", nome);

    printf("Digite seu salario bruto com vale: ");
    scanf("%f", &sal_bruto);

    printf("Digite os descontos governamentais em reais: ");
    scanf("%f", &desc);

    printf("Digite o valor do vale: ");
    scanf("%f", &vale);

    sal_liq = sal_bruto - (desc + vale);

    if (sal_liq > 0)
    {

        emprestimo = sal_liq * 0.3;
        sal_final = sal_liq + emprestimo;

        printf("Salario bruto = R$%.2f\nImpostos = R$%.2f\nVale = R$%.2f\nSalario liquido = R$%.2f\nValor do emprestimo = R$%.2f\nO salario final eh R$%.2f", sal_bruto, desc, vale, sal_liq, emprestimo, sal_final);
    }
    else
    {
        printf("Valores inválidos!");
    }

    return 0;
}
