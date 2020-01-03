#include <stdio.h>

int funcaoFatorial(int fatorial);

int main()
{
    int fatorial;

    printf("Escreva um numero para calculo de fatorial:\n");
    scanf("%d",&fatorial);

    fatorial = funcaoFatorial(fatorial);

    printf("\nResultado: %d",fatorial);

    return 0;
}

int funcaoFatorial(int fatorial)
{
    int resposta = 1;

    for(int i=fatorial; i > 1; i--)
    {
        resposta *= i;
    }

    return resposta;
}
