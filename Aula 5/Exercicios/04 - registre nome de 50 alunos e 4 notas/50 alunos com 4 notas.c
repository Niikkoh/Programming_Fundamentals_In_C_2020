#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char nomesAlunos[150][50];
    float notasAlunos[5][50],mediaTurma;
    char nome[150];
    mediaTurma = 0;

    srand(time(NULL));

    printf("Insira o nome dos 50 alunos: \n\n");
    for(int i=0;i<50;i++)
    {
        fflush(stdin);
        printf("Aluno %d: ",i+1);
        gets(nome);
        strcpy(nomesAlunos[i],nome);
        notasAlunos[0][i] = rand()%11;
        notasAlunos[1][i] = rand()%11;
        notasAlunos[2][i] = rand()%11;
        notasAlunos[3][i] = rand()%11;
        notasAlunos[4][i] = (notasAlunos[0][i]+notasAlunos[1][i]+notasAlunos[2][i]+notasAlunos[3][i])/4.0;
        mediaTurma += notasAlunos[4][i];
    }

    mediaTurma = mediaTurma/50.0;

    for(int i=0;i<50;i++)
    {
        if(notasAlunos[4][i] >= mediaTurma)
        {
            printf("%s \n",nomesAlunos[i]);
        }
    }

    return 0;
}
