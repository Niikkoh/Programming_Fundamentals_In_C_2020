#include<stdio.h>

//Soma números quantas vezes o usuário quiser, até ele entrar com uma entrada menor que 0

int main()
{

    int valor;
    int soma = 0;

    scanf("%d",&valor);
    while(valor >= 0)
    {
        soma+=valor;
        scanf("%d",&valor);
    }

    printf("\n\nResultado: %d",soma);

    return 0;
}
