#include <stdio.h>

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
            resultado = i;
            while(i != 1)
            {
                resultado *= i-1;
                i--;
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
