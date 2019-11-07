#include<stdio.h>

int main()
{

    int vetor[5];
    float media;

    printf("Digite 5 numeros inteiros: \n");
    scanf("%d",&vetor[0]);
    scanf("%d",&vetor[1]);
    scanf("%d",&vetor[2]);
    scanf("%d",&vetor[3]);
    scanf("%d",&vetor[4]);

    media = ((float)(vetor[0]+vetor[1]+vetor[2]+vetor[3]+vetor[4]))/5;

    printf("\nMedia: %.2f",media);

    return 0;
}
