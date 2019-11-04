#include<stdio.h>

int main()
{
    int numero,resultado,i;

    printf("Informe um numero: ");
    scanf("%d",&numero);
    system("cls");

    if(numero>=0)
    {
        if(numero == 0)
        {
            resultado = 1;
        }
        else
        {
            resultado = numero;

            for(int i=resultado-1;i>0;i--)
            {
                resultado*=i;
            }
        }

        printf("O fatorial de %d sera %d",numero,resultado);
    }
    else
    {
        printf("Valor inserido invalido");
    }
    return 0;
}
