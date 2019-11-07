#include<stdio.h>
#include<stdlib.h>

int main()
{

    int nadadores[50],menor,maior,media,maiorMedia;
    media=0;
    maior=0;
    menor=100;

    printf("Insira a idade dos nadadores: \n");

    srand(time(NULL));

    for(int i=0;i<50;i++)
    {
        nadadores[i] = rand()%94 + 5;
        printf("\n%d\n",nadadores[i]);

        if(nadadores[i] < 5 || nadadores[i] > 99)
        {
            printf("Entrada Invalida");
        }
        else
        {
            media+=nadadores[i];
            if(nadadores[i] < 8)
            {
                printf("Infantil A");
            }
            else if(nadadores[i] < 11)
            {
                printf("Infantil B");
            }
            else if(nadadores[i] < 14)
            {
                printf("Juvenil A");
            }
            else if(nadadores[i] < 18)
            {
                printf("Juvenil B");
            }
            else
            {
                printf("Adulto");
            }

            if(nadadores[i] < menor)
            {
                menor = nadadores[i];
            }
            if(nadadores[i] > maior)
            {
                maior = nadadores[i];
            }
        }
        printf("\n");
    }

    media = media / 50;
    maiorMedia=0;

    for(int i=0;i<50;i++)
    {
        if(nadadores[i] > media)
        {
            maiorMedia++;
        }
    }

    printf("\nMedia idade: %d\nMaior idade: %d\nMenor idade: %d",media,maior,menor);
    printf("\n\nNadadores com idade maior que a media: %d",maiorMedia);

    return 0;
}
