#include<stdio.h>
#include<string.h>

int main()
{

    char nomeAlunos[150][10];
    char nome[150];
    float parciaisAlunos[10][3];
    float maiorParcial,menorParcial,mediaFinal;
    int frequenciaAlunos[10];

    for(int i=0;i<10;i++)
    {
        printf("Informe dados do %d aluno: \n\nNome: ",i+1);
        fflush(stdin);
        gets(nome);
        strcpy(nomeAlunos[i],nome);
        printf("Parciais: \n1 -");
        scanf("%f",&parciaisAlunos[i][0]);
        printf("2 -");
        scanf("%f",&parciaisAlunos[i][1]);
        printf("3 -");
        scanf("%f",&parciaisAlunos[i][2]);
        printf("Frequencia: ");
        scanf("%d",&frequenciaAlunos[i]);
        printf("\n");
    }

    system("cls");

    for(int i=0;i<10;i++)
    {
        menorParcial = 11;
        maiorParcial = 0;
        mediaFinal = 0;

        for(int j=0;j<3;j++)
        {
            if(menorParcial > parciaisAlunos[i][j])
            {
                menorParcial = parciaisAlunos[i][j];
            }
            if(maiorParcial < parciaisAlunos[i][j])
            {
                maiorParcial = parciaisAlunos[i][j];
            }
            mediaFinal+=parciaisAlunos[i][j];
        }

        mediaFinal = mediaFinal / 3.0;

        printf("Aluno %d:\n\nNome: %s\nMedia: %.2f\nFrequencia: %d\nMaior parcial: %.2f\nMenor Parcial: %.2f\n\n------------\n\n",i+1,nomeAlunos[i],mediaFinal,frequenciaAlunos[i],maiorParcial,menorParcial);
    }
    return 0;
}
