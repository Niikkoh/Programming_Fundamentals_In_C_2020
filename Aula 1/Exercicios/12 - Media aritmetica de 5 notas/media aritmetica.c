#include<stdio.h>

int main()
{
    float media, nota;
    media=0;

    printf("Insira as 5 notas do aluno:\n");

    for(int i=0;i<5;i++)
    {
        scanf("%f",&nota);
        media+=nota;
    }
    media = media/5;
    printf("\nMedia: %.2f",media);

    return 0;
}
