#include<stdio.h>

int main()
{

    int numero,soma;
    soma=0;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    for(int i=1;i<=numero;i++)
    {
        soma+=i;
    }

    printf("\nResultado: %d",soma);

    return 0;
}
