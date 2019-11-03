#include<stdio.h>

int main()
{
    float area,largura,altura;

    printf("Informe a largura: ");
    scanf("%f",&largura);
    printf("Informa a altura: ");
    scanf("%f",&altura);

    area = largura*altura;

    printf("\nArea do retangulo e %.3f",area);

    return 0;
}
