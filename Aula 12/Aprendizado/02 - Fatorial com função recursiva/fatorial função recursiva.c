#include <stdio.h>

int funcaoRecursiva(int fatorial);

int main()
{
    int fatorial;

    printf("Escreva um numero para calculo de fatorial:\n");
    scanf("%d",&fatorial);

    fatorial = funcaoRecursiva(fatorial);

    printf("\nResultado: %d",fatorial);

    return 0;
}

int funcaoRecursiva(int fatorial)
{
    int resultado;

    if(fatorial == 1 || fatorial == 0)
    {
        return 1;
    }

    resultado = fatorial * funcaoRecursiva(fatorial - 1);

    return resultado;
}

