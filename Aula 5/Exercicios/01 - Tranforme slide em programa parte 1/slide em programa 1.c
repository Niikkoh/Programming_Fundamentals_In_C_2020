#include<stdio.h>

int main()
{

    float matriz[2][2];

    float media,quant;

    matriz[0][0] = 9;
    matriz[0][1] = 8;
    matriz[1][0] = 7;
    matriz[1][1] = 7;

    quant = matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1];
    media = quant/4.0;

    printf("A media dos 4 numeros e: %f",media);

    return 0;
}
