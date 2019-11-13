#include<stdio.h>

int main()
{

    int M[3][3],N[3][3],mult[3][3];

    printf("Informe os dados da primeira matriz:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d X %d : ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }

    printf("Informe os dados da segunda matriz:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d X %d : ",i+1,j+1);
            scanf("%d",&N[i][j]);
        }
    }

    printf("\n\nResultado:\n\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mult[i][j] = 0;

            for(int k=0;k<3;k++)
            {
                mult[i][j] += (M[i][k] * N[k][j]);
            }
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    return 0;
}
