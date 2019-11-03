#include<stdio.h>

int main()
{

    float variavel1,variavel2,resultado;
    int escolha,calculo;

    escolha = 1;

    while(escolha == 1)
    {
        printf("Qual calculo deseja realizar:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
        scanf("%d",&calculo);

        system("cls");

        printf("Primeiro Numero: ");
        scanf("%f",&variavel1);

        printf("\nSegundo Numero: ");
        scanf("%f",&variavel2);

        system("cls");

        switch(calculo)
        {
            case 1:
                {
                    printf("Resultado: ");
                    resultado = variavel1 + variavel2;
                    printf("%.2f",resultado);
                }
                break;
            case 2:
                {
                    printf("Resultado: ");
                    resultado = variavel1 - variavel2;
                    printf("%.2f",resultado);
                }
                break;
            case 3:
                {
                    printf("Resultado: ");
                    resultado = variavel1 * variavel2;
                    printf("%.2f",resultado);
                }
                break;
            case 4:
                {
                    printf("Resultado: ");
                    resultado = variavel1 / variavel2;
                    printf("%.2f",resultado);
                }
                break;
            default:
                {
                    printf("Entrada invalida");
                }
            }

            printf("\n\nDeseja realizar outro calculo?\n1-Sim\n2-Nao\n");
            scanf("%d",&escolha);
            system("cls");
    }
    return 0;
}
