#include<stdio.h>

int main()
{

    float nota,media;
    media=0;

    printf("Informe todas as 4 notas: \n");

    for(int i=0;i<4;i++)
    {
        scanf("%f",&nota);
        media+=nota;
    }

    media = media/4;

    printf("\nMedia final: %.2f\n\n",media);

    if(media <= 5)
    {
        printf("Reprovado");
    }
    else if(media < 7)
    {
        printf("Em exame");
    }
    else
    {
        printf("Aprovado");
    }

    return 0;
}
