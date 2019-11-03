#include<stdio.h>

int main()
{
    int resultado,variavel;

    resultado = 0;

    printf("Insira 6 numeros para somar:\n");

    for(int x=0;x<6;x++)
    {
        scanf("%d",&variavel);
        resultado+=variavel;
    }

    printf("\nResultado: %d",resultado);

    return 0;
}
