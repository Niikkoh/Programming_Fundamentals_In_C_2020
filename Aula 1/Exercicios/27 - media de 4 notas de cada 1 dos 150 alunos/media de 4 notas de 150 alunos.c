#include<stdio.h>
#include<stdlib.h>

int main()
{

    int nota1,nota2,nota3,nota4;
    float mediaAluno,mediaFinal;

    srand(time(NULL));
    mediaFinal=0;

    for(int i=1;i<=150;i++)
    {

        nota1 = rand() % 11;
        nota2 = rand() % 11;
        nota3 = rand() % 11;
        nota4 = rand() % 11;

        mediaAluno = (float)(nota1 + nota2 + nota3 + nota4) / 4;
        printf("%d - %d|%d|%d|%d || %.2f\n",i,nota1,nota2,nota3,nota4,mediaAluno);
        mediaFinal+=mediaAluno;
    }

    mediaFinal = mediaFinal/150;
    printf("\nMedia da turma: %.2f",mediaFinal);

    return 0;
}
