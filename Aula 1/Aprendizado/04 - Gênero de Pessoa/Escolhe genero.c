#include<stdio.h>


int main()
{
    int genero;

    printf("Informe seu sexo: \n");
    printf("1 - Masculino\n2 - Feminino\n");
    scanf("%d",&genero);
    printf("\n\n");

    switch(genero)
    {
        case 1:
            {
                printf("Masculino");
            }
            break;
        case 2:
            {
                printf("Feminino");
            }
            break;
        default:
            {
                printf("Nao Declarado");
            }
    }
}
