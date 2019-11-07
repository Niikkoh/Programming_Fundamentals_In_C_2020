#include<stdio.h>

int main()
{

    int vetor[5];

    printf("1-Preenchendo o vetor com valores 30:\n");

    for(int i=0;i<5;i++)
    {
        vetor[i] = 30;
        printf("%d\n",vetor[i]);
    }

    printf("\n2-Preenchendo o vetor com 1,2,3... : \n");

    for(int i=0;i<5;i++)
    {
        vetor[i] = i+1;
        printf("%d\n",vetor[i]);
    }

    printf("\n3-Preenchendo o vetor com 1 para par e 0 para impar: \n");

    for(int i=0;i<5;i++)
    {
        if((i+1)%2 == 0)
        {
            vetor[i] = 1;
        }
        else
        {
            vetor[i] = 0;
        }

        printf("%d\n",vetor[i]);
    }

    return 0;
}
