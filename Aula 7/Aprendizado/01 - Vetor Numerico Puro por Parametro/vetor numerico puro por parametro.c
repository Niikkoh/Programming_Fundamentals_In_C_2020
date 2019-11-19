#include<stdio.h>

#define NUM_ALUNOS 3

float media(float notasAlunos[],int tam);

int main()
{
    float notasAlunos[NUM_ALUNOS];
    float mediaNota;

    printf("Insira as notas:\n\n");
    for(int i=0;i<NUM_ALUNOS;i++)
    {
        printf("%d: ",i+1);
        scanf("%f",&notasAlunos[i]);
        printf("\n");
    }

    mediaNota = media(notasAlunos,NUM_ALUNOS);
    printf("\nA media da nota sera %.2f",mediaNota);

    return 0;
}

float media(float notasAlunos[],int tam)
{
    float media;
    media = 0;

    for(int i=0;i<tam;i++)
    {
        media+=notasAlunos[i];
    }
    media = (float) media/tam;

    return media;
}
