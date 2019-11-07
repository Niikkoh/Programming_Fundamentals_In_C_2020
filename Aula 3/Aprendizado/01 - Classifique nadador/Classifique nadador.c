#include<stdio.h>

int main()
{

    int idade;

    printf("Insira a idade do nadador: ");
    scanf("%d",&idade);
    printf("\n");

    if(idade < 5 || idade > 99)
    {
        printf("Entrada Invalida");
    }
    else if(idade < 8)
    {
        printf("Infantil A");
    }
    else if(idade < 11)
    {
        printf("Infantil B");
    }
    else if(idade < 14)
    {
        printf("Juvenil A");
    }
    else if(idade < 18)
    {
        printf("Juvenil B");
    }
    else
    {
        printf("Adulto");
    }

    return 0;
}
