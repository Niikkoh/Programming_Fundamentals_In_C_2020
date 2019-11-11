#include<stdio.h>

int main()
{
    float matriz[2][2],media;

    media = 0;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          printf("Escreva o %d numero:\n",(i*2)+j+1);
          scanf("%f",&matriz[i][j]);
          media += matriz[i][j];
          printf("\n");
        }
    }

    media = media / 4.0;
    system("cls");
    printf("Media: %.2f",media);

    return 0;
}
