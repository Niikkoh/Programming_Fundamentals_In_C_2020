#include<stdio.h>
#include<stdlib.h>

int main()
{

    float precoCompra,precoVenda,lucroTotal,lucro;
    int contador10,contador10x20,contador20;

    contador10 = 0;
    contador10x20 = 0;
    contador20 = 0;
    lucroTotal = 0;

    srand(time(NULL));

    for(int i=0;i<300;i++)
    {
        precoCompra = rand() % 50 +5;
        precoVenda = (rand() % 5 + 1) + precoCompra;
        lucro = (((precoVenda-precoCompra)) / precoCompra) * 100;

        if(lucro < 10)
        {
            contador10++;
        }
        else if(lucro >=10 && lucro < 20)
        {
            contador10x20++;
        }
        else
        {
            contador20++;
        }

        lucroTotal+=lucro;
    }

    lucroTotal = lucroTotal / 300;

    printf("Media de lucro: %.2f",lucroTotal);
    printf("\nLucro abaixo de 10: %d",contador10);
    printf("\nLucro entre 10 e 20: %d",contador10x20);
    printf("\nLucro acima de 20: %d",contador20);

    return 0;
}
