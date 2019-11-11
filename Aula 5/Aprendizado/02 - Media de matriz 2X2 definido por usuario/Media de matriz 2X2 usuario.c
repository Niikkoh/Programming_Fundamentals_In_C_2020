#include<stdio.h>

int main()
{

    float matriz[2][2],media;

    puts("Escreva o primeiro numero:");
    scanf("%f",&matriz[0][0]);
    puts("\nEscreva o segundo numero:");
    scanf("%f",&matriz[0][1]);
    puts("\nEscreva o terceiro numero:");
    scanf("%f",&matriz[1][0]);
    puts("\nEscreva o quarto numero:");
    scanf("%f",&matriz[1][1]);
    system("cls");

    media = (matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1]) / 4;

    printf("Media: %.2f",media);

    return 0;
}

