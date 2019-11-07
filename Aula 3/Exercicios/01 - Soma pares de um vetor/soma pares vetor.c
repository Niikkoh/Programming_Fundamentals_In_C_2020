#include"stdio.h"
#include"stdlib.h"

int main()
{

    int vetor1[100],vetor2[50];
    srand(time(NULL));

    for(int i=0;i<100;i++)
    {
        vetor1[i] = rand()%11;
    }

    for(int i=0;i<50;i++)
    {
        vetor2[i] = vetor1[i*2] + vetor1[(i*2)+1];
        printf("%d\n%d\n%d\n\n",vetor1[i*2],vetor1[i*2+1],vetor2[i]);
    }

    return 0;
}
