#include<stdio.h>
#include<string.h>

int main()
{
    float parciaisAluno[30][2];
    char nomesAlunos[150][30];
    char nome[150];
    float mediaTurma,media,P;
    mediaTurma = 0;
    printf("Insira as parciais de cada aluno: \n\n");
    for(int i=0;i<30;i++)
    {
        printf("%d aluno:\nNome: ",i+1);
        fflush(stdin);
        gets(nome);
        strcpy(nomesAlunos[i],nome);
        printf("1 Parcial: ");
        scanf("%f",&parciaisAluno[i][0]);
        printf("2 Parcial: ");
        scanf("%f",&parciaisAluno[i][1]);
        printf("\n");

        mediaTurma += (parciaisAluno[i][0] + parciaisAluno[i][1]) / 2.0;
    }

    mediaTurma = mediaTurma / 30.0;
    P = 1.5 * mediaTurma;

    for(int i=0;i<30;i++)
    {
        media = (parciaisAluno[i][0] + parciaisAluno[i][1]) / 2.0;
        printf("%s %d: ",nomesAlunos[i],i+1);

        if(media >= 7 || parciaisAluno[i][1] == 10)
        {
            printf("Aprovado");
        }
        else if(media >= 5 || media >= P)
        {
            printf("Exame");
        }
        else
        {
            printf("Reprovado");
        }
        printf("\n\n");
    }

    return 0;
}
