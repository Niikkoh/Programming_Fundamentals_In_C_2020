#include <stdio.h>

float calculaMedia(float notasAlunos[][2], int n);
void selecionaAlunosMaiorMedia(float notasAlunos[][2], int n, float media);

int main()
{

    float notasAlunos[5][2];
    float media;

    puts("Insira as notas:\n");

    for(int i=0;i<5;i++)
    {
        printf("%d aluno:\n",i+1);
        scanf("%f",&notasAlunos[i][0]);
        scanf("%f",&notasAlunos[i][1]);
        printf("\n\n");
    }

    system("cls");
    media = calculaMedia(notasAlunos,5);
    printf("Media dos alunos: %.2f\n\nAlunos com nota maior que a media:\n",media);
    selecionaAlunosMaiorMedia(notasAlunos,5,media);

    return 0;
}

float calculaMedia(float notasAlunos[][2], int n)
{
    float media,nota;

    media = 0;
    for(int i=0;i<n;i++)
    {
        nota = (notasAlunos[i][0] + notasAlunos[i][1])/2.0;
        media+=nota;
    }

    media = (float) media/n;

    return media;
}

void selecionaAlunosMaiorMedia(float notasAlunos[][2], int n, float media)
{
    for(int i=0;i<n;i++)
    {
        if((notasAlunos[i][0]+notasAlunos[i][1])/2.0 > media)
        {
            printf("Aluno numero %d\n",i+1);
        }
    }
}
