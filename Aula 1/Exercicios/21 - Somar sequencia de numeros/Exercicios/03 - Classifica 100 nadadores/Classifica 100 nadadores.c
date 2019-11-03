#include<stdio.h>

int main()
{

    int nadador;

    for(int contador=0; contador<100; contador++)
    {
        printf("Idade do nadador: ");
        scanf("%d",&nadador);

        if(nadador<5 || nadador >99)
        {
            printf("Idade invalida");
        }
        else if(nadador<8)
        {
            printf("Infantil A");
        }
        else if(nadador<11)
        {
            printf("Infantil B");
        }
        else if(nadador<14)
        {
            printf("juvenil A");
        }
        else if(nadador<18)
        {
            printf("juvenil B");
        }
        else
        {
            printf("Adulto");
        }

        printf("\n\n");
    }

    return 0;
}
