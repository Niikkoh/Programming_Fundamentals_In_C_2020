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
            i = numero;
            resultado = 1;
            do
            {
                resultado *= i;
                i--;
            }
            while(i>1);
        }

        printf("O fatorial de %d sera %d",numero,resultado);
    }
    else
    {
        printf("Valor inserido invalido");
    }
    return 0;
}
