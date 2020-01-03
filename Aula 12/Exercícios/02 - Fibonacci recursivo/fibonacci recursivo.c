#include <stdio.h>

int fibonacci(int n);

int main()
{
    int resultado,n;

    printf("Programa para calculo de fibonacci\n\n");
    printf("Escreva um termo N: ");
    scanf("%d",&n);

    resultado = fibonacci(n);

    printf("\nResultado: %d",resultado);

    return 0;
}

int fibonacci(int n)
{
    int resultado;

    if(n <= 2)
    {
        return 1;
    }

    resultado = fibonacci(n-1) + fibonacci(n-2);

    return resultado;
}
