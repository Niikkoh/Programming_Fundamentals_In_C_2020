#include<stdio.h>

int main()
{
    int calculo;
    float real,real2,resultado;

    printf("Qual calculo deseja realizar:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d",&calculo);

    printf("\nInsira o primeiro numero real: ");
    scanf("%f",&real);

    printf("Insira o segundo numero real: ");
    scanf("%f",&real2);

    printf("\nResultado: ");

    switch(calculo)
    {
        case 1:
            {
                resultado = real + real2;
                printf("%f",resultado);
            }
            break;
        case 2:
            {
                resultado = real - real2;
                printf("%f",resultado);
            }
            break;
        case 3:
            {
                resultado = real * real2;
                printf("%f",resultado);
            }
            break;
        case 4:
            {
                resultado = real / real2;
                printf("%f",resultado);
            }
            break;
        default:
            {
                printf("Entrada invalida");
            }
    }
    return 0;
}
