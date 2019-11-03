#include<stdio.h>

int main()
{
    float numero;

    printf("Insira um numero: ");
    scanf("%f",&numero);

    if(numero<100)
    {
        printf("\nEsse numero e menor que 100");
    }
    else
    {
        numero = numero/100;
        printf("\nEsse numero e %.2f maior que 100",numero);
    }

    return 0;
}
