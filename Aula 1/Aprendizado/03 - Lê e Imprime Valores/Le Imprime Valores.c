#include<stdio.h>

//Programa lê e imprime valores

int main()
{
    int A;
    float B;
    char C;

    printf("Escreva um inteiro:\n");
    scanf("%d",&A);

    printf("\nEscreva um real:\n");
    scanf("%f",&B);

    printf("\nEscreva um caractere:\n");
    fflush(stdin);
    scanf("%c",&C);

    printf("\nO numero inteiro e: %d",A);
    printf("\nO numero real e: %f",B);
    printf("\nO caractere e: %c",C);

    return 0;
}
