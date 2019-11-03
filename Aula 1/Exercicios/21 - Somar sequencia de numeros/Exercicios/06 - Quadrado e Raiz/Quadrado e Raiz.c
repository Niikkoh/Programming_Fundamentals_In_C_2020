#include<stdio.h>

int main()
{

    int opcao;
    float resultado,numero;

    printf("Selecione uma opcao:\n1- Quadrado\n2- Raiz\n");
    scanf("%d",&opcao);

    printf("\nInsira o numero: ");
    scanf("%f",&numero);

    switch(opcao)
    {
        case 1:
            {
                resultado = numero*numero;
                printf("%f",resultado);
            }
            break;
        case 2:
            {
                resultado = 0;

                while(resultado*resultado < numero)
                {
                    resultado+=0.001;
                }
                printf("%.3f",resultado);
            }
            break;
        default:
            {
                printf("Entrada invalida");
            }
    }
    return 0;
}
