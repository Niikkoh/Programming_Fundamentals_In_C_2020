#include<stdio.h>

int main()
{

    int fatorial,resultado;

    printf("Digite um numero: ");
    scanf("%d",&fatorial);

    resultado = fatorial;
    for(int i=fatorial;i>1;i--)
    {
        resultado*=i-1;
    }

    printf("\nResultado: %d",resultado);

    return 0;
}
