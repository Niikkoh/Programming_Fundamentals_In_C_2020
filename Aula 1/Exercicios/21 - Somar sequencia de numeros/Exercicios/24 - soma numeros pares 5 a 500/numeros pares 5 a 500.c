#include<stdio.h>

int main()
{
    int soma = 0;

    for(int i=6;i<=500;i+=2)
    {
        soma+=i;
    }

    printf("Resultado: %d ",soma);

    return 0;
}
