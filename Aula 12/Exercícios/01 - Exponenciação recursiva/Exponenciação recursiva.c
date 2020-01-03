#include <stdio.h>

int exponenciacao(int base, int expoente);

int main()
{

    int base, expoente, resultado;

    printf("Programa para calcular exponenciacao:\n\nBase: ");
    scanf("%d",&base);
    printf("Expoente: ");
    scanf("%d",&expoente);

    resultado = exponenciacao(base,expoente);

    printf("\nResultado: %d",resultado);

    return 0;
}

int exponenciacao(int base, int expoente)
{

    int resultado;

    if(expoente <= 0)
    {
        return 1;
    }
    else if(expoente == 1)
    {
        return base;
    }

    resultado = base * exponenciacao(base,expoente-1);

    return resultado;
}
