#include<stdio.h>

int main()
{

    float area,catetoOP,catetoAD;

    printf("Informe o cateto oposto: ");
    scanf("%f",&catetoOP);
    printf("Informa o cateto adjacente: ");
    scanf("%f",&catetoAD);

    area = (catetoOP*catetoAD)/2;

    printf("\nArea do retangulo e %.3f",area);

    return 0;
}
