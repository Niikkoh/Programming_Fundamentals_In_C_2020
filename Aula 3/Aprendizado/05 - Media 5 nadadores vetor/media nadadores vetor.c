#include<stdio.h>

int main()
{

    int nadadores[5],media;
    media=0;

    printf("Digite a idade dos nadadores:\n");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&nadadores[i]);
        media+=nadadores[i];
    }

    media = media/5;

    printf("\nA media de idade dos nadadores: %d",media);

    return 0;
}
