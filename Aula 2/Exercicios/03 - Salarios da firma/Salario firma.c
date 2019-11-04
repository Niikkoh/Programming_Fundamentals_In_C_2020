#include<stdio.h>

int main()
{

    float salario,mediaSalario,menorSalario,menorSalario2,maiorSalario,maiorSalario2,i;
    i=0;
    mediaSalario=0;

    printf("Informe o salario de cada empregado na firma\nPara confirmar, insira 0\nR$");

    scanf("%f",&salario);

    while(salario != 0)
    {
        mediaSalario+=salario;
        i++;

        if(i == 1)
        {
            menorSalario = salario;
            menorSalario2 = salario;
            maiorSalario = salario;
            maiorSalario2 = salario;
        }
        else if(i == 2)
        {
            if(menorSalario > salario)
            {
                maiorSalario2 = salario;
                menorSalario = salario;
            }
            else if(maiorSalario < salario)
            {
                menorSalario2 = salario;
                maiorSalario = salario;
            }
        }
        else
        {
            if(menorSalario > salario)
            {
                menorSalario2 = menorSalario;
                menorSalario = salario;
            }
            else if(maiorSalario < salario)
            {
                maiorSalario2 = maiorSalario;
                maiorSalario = salario;
            }
        }
        printf("R$");
        scanf("%f",&salario);
    }

    printf("\n\n");

    if(i==0)
    {
        printf("Nenhum Salario foi adicionado");
    }
    else
    {
        mediaSalario = mediaSalario / i;
        printf("Menor Salario:R$%.2f\nSegundo Menor Salario:R$%.2f\n",menorSalario,menorSalario2);
        printf("Maior Salario:R$%.2f\nSegundo Maior Salario:R$%.2f\n",maiorSalario,maiorSalario2);
        printf("Media:%.2f\nMedia do menor e maior salario:%.2f",mediaSalario,(maiorSalario+menorSalario)/2);
    }

    return 0;
}
