#include<stdio.h>
#include<stdlib.h>

int main()
{

    int linha,coluna;

    puts("Linha: ");

    do
    {
        scanf("%d",&linha);
    }while(linha<1 || linha>100);

    puts("\nColuna: ");

    do
    {
        scanf("%d",&coluna);
    }while(coluna<1 || coluna>80);

    int matriz[linha][coluna];
    int matrizT[coluna][linha];

    srand(time(NULL));

    for(int i=0;i<linha;i++)
    {
        for(int j=0;j<coluna;j++)
        {
            matriz[i][j] = rand()%11;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<coluna;i++)
    {
        for(int j=0;j<linha;j++)
        {
            matrizT[i][j] = matriz[j][i];
            printf("%d ",matrizT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
