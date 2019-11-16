#include<stdio.h>

void imprimeImparPar(int);
void imprimeDivisibilidadePor5(int);
void imprimeFatorial(int);
void imprimeTabuada(int);

int main()
{
    int inteiro;

    printf("Escreva um inteiro: ");
    scanf("%d",&inteiro);

    printf("\nPar ou impar: ");
    imprimeImparPar(inteiro);
    printf("\n");
    imprimeDivisibilidadePor5(inteiro);
    printf("\n");
    imprimeFatorial(inteiro);
    printf("\n\nTabuada:\n");
    imprimeTabuada(inteiro);

    return 0;
}

void imprimeImparPar(int inteiro)
{
    if(inteiro%2 == 0)
    {
        printf("Par");
    }
    else
    {
        printf("Impar");
    }
}

void imprimeDivisibilidadePor5(int inteiro)
{
    if(inteiro%5 == 0)
    {
        printf("Divisivel por 5");
    }
    else
    {
        printf("Nao divisivel por 5");
    }
}

void imprimeFatorial(int inteiro)
{
    int fatorial;
    fatorial = inteiro;

    for(int i = inteiro-1;i>0;i--)
    {
        fatorial*=i;
    }

    printf("Fatorial de %d: %d",inteiro,fatorial);
}

void imprimeTabuada(int inteiro)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",inteiro,i,inteiro*i);
    }
}
