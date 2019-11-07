#include<stdio.h>
#include<stdlib.h>

int main()
{

    int vetor[200],vetorInvertido[200];
    srand(time(NULL));

    for(int i=0;i<200;i++)
    {
        vetor[i] = rand()%101;
        printf("%d\n",vetor[i]);
    }

    printf("\n---------------\n");

    for(int i=0;i<200;i++)
    {
        vetorInvertido[i] = vetor[199 - i];
        printf("%d\n",vetorInvertido[i]);
    }

    return 0;
}
