#include<stdio.h>
#include<stdlib.h>

int main()
{

    int nota;
    float media;

    srand(time(NULL));
    media=0;

    for(int i=1;i<=150;i++)
    {
        nota = rand()%11;
        printf("%d - %d\n",i,nota);
        media+=nota;
    }

    media = media/150;
    printf("\nMedia da turma: %.2f",media);9
    return 0;
}
