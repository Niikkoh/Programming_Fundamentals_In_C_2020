#include<stdio.h>

int main()
{

    float matriz[2][2],media;

    matriz[0][0] = 9.0;
    matriz[0][1] = 8.0;
    matriz[1][0] = 7.0;
    matriz[1][1] = 7.0;

    media = (matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1]) / 4;

    printf("%.2f",media);

    return 0;
}
