#include<stdio.h>
#include<stdlib.h>

int main()
{

    int idade,menor,maior,media;
    media=0;
    maior=0;
    menor=100;

    printf("Insira a idade dos nadadores: \n");

    srand(time(NULL));

    for(int i=0;i<50;i++)
    {
        idade = rand()%94 + 5;
        printf("\n%d\n",idade);

        if(idade < 5 || idade > 99)
        {
            printf("Entrada Invalida");
        }
        else
        {
            media+=idade;
            if(idade < 8)
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

            if(idade < menor)
            {
                menor = idade;
            }
            if(idade > maior)
            {
                maior = idade;
            }
        }
        printf("\n");
    }

    media = media / 50;

    printf("\nMedia idade: %d\nMaior idade: %d\n Menor idade: %d",media,maior,menor);

    return 0;
}
