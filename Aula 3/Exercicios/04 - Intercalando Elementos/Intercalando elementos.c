#include<stdio.h>
#include<stdlib.h>

int main()
{

    int vetorA[25],vetorB[25],vetorIntercado[50];
    srand(time(NULL));

    printf("Primeiro vetor:\n");
    for(int i=0;i<25;i++)
    {
        vetorA[i] = rand()%101;
        printf("%d\n",vetorA[i]);
    }

    printf("\nSegundo vetor: \n");
    for(int i=0;i<25;i++)
    {
        vetorB[i] = rand()%101;
        printf("%d\n",vetorB[i]);
    }

    printf("\nElementos intercalados:\n");
    for(int i=0;i<50;i++)
    {
        if(i%2 == 0)
        {
            vetorIntercado[i] = vetorA[i/2];
        }
        else
        {
            vetorIntercado[i] = vetorB[i/2];
        }

        printf("%d\n",vetorIntercado[i]);
    }

    return 0;
}
