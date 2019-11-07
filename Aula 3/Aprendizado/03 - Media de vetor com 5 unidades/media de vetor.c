#include<stdio.h>

int main()
{
    int vetor[5],media;

    vetor[0] = 2;
    vetor[1] = 3;
    vetor[2] = 5;
    vetor[3] = 7;
    vetor[4] = 8;

    media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4])/5;

    printf("%d",media);

    return 0;
}
