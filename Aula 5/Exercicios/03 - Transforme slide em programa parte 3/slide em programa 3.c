#include<stdio.h>

int main()
{

    float matriz[4][2];

    float media,quant;
    int cont1,cont2;
    quant = 0;

    for(cont1=0;cont1<4;cont1++)
    {
        for(cont2=0;cont2<2;cont2++)
        {
            printf("Digite o numero de posicao %i, %i da matriz:",cont1,cont2);
            scanf("%f",&matriz[cont1][cont2]);
            quant += matriz[cont1][cont2];
        }
    }

    media = quant / 8.0;
    printf(" A média dos 8 números da matriz e: %f",media);n

    return 0;
}
