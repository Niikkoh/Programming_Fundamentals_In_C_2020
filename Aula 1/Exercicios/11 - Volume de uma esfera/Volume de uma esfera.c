#include<stdio.h>

int main()
{
    float raio,volume;

    printf("Informe o raio da esfera: ");
    scanf("%f",&raio);

    volume = (4 * (raio*raio*raio))/3;

    printf("\nO volume da esfera e %.3f PI",volume);

    return 0;
}
