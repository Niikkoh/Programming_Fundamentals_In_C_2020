#include<stdio.h>

//Soma n�meros quantas vezes o usu�rio quiser, at� ele entrar com uma entrada menor que 0

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
