#include<stdio.h>

int main()
{

    float volume,lado;

    printf("Informe o lado do cubo: ");
    scanf("%f",&lado);

    volume = lado*lado*lado;

    printf("\nO volume do cubo e %.3f",volume);

    return 0;
}
