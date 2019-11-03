#include<stdio.h>

int main()
{

    int idade;

    printf("Escreva a idade do nadador: ");
    scanf("%d",&idade);
    printf("\n\n");

    if((idade < 5) || (idade > 119))
    {
        printf("Idade invalida");
    }
    else if(idade <= 7)
        printf("Infantil A");
    else if(idade <= 10)
        printf("Infantil B");
    else if(idade <= 13)
        printf("Juvenil A");
    else if(idade <= 17)
        printf("Juvenil B");
    else
        printf("Adulto");

    return 0;
}
