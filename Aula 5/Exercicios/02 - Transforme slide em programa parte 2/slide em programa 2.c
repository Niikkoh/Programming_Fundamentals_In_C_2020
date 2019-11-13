#include<stdio.h>

int main()
{

    float matriz[2][2];
    float media,quant;

    printf("Digite o 1 numero: ");
    scanf("%f",&matriz[0][0]);
    printf("Digite o 2 numero: ");
    scanf("%f",&matriz[0][1]);
    printf("Digite o 3 numero: ");
    scanf("%f",&matriz[1][0]);
    printf("Digite o 4 numero: ");
    scanf("%f",&matriz[1][1]);

    quant = matriz [0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1];

    media = quant/4.0;
    printf("A media dos 4 numeros e: %f",media);

    return 0;
}
