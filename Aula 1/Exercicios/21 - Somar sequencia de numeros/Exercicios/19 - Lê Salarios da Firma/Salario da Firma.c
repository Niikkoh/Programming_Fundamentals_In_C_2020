#include<stdio.h>

int main()
{

    float salario1,salario2,salario3,maiorSalario,menorSalario,media;

    printf("Informe os salarios da firma: \nFuncionario 1:");
    scanf("%f",&salario1);
    printf("Funcionario 2: ");
    scanf("%f",&salario2);
    printf("Funcionario 3: ");
    scanf("%f",&salario3);

    media = (salario1+salario2+salario3)/3;

    if((salario1>=salario2) && (salario1>=salario3))
    {
        maiorSalario = salario1;

        if(salario2<=salario3)
        {
            menorSalario = salario2;
        }
        else
        {
            menorSalario = salario3;
        }
    }
    else if((salario2>=salario1) && (salario2>=salario3))
    {
        maiorSalario = salario2;

        if(salario1<=salario3)
        {
            menorSalario = salario1;
        }
        else
            menorSalario = salario3;
    }
    else
    {
        maiorSalario = salario3;

        if(salario1<=salario2)
        {
            menorSalario = salario1;
        }
        else
        {
            menorSalario = salario2;
        }
    }

    printf("\nMaior Salario: %.2f\nMenor Salario: %.2f\nMedia: %.2f",maiorSalario,menorSalario,media);

    return 0;
}
