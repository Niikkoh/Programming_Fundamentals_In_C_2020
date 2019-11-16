#include<stdio.h>

float insereCalculaMediaAluno();
void informaStatusAluno(float);
float calculaMaiorMedia(float*,int);
void calculaMenorESegundaMenorMedia(float*,int,float*,float*);

int main()
{
    int alunos;
    float mediaGeral,maiorMedia,menorMedia,segundaMenorMedia;
    mediaGeral = 0;

    printf("Informe o numero de alunos na escola: ");
    do{
        scanf("%d",&alunos);
    }while(alunos < 1 || alunos>30);
    float mediaAlunos[alunos];

    for(int i=0;i<alunos;i++)
    {
        printf("Informe notas do %d aluno: \n",i+1);
        mediaAlunos[i] = insereCalculaMediaAluno();
        mediaGeral+=mediaAlunos[i];
        printf("\n\n");
    }

    mediaGeral = mediaGeral/alunos;
    maiorMedia = calculaMaiorMedia(&mediaAlunos,alunos);
    calculaMenorESegundaMenorMedia(&mediaAlunos,alunos,&menorMedia,&segundaMenorMedia);

    printf("Media Geral: %.2f",mediaGeral);
    printf("\nMaior Media: %.2f",maiorMedia);
    printf("\nMenor Media: %.2f",menorMedia);
    printf("\nSegunda Menor Media: %.2f",segundaMenorMedia);

    return 0;
}

float insereCalculaMediaAluno()
{
    float media,nota;

    media=0;
    for(int i=1;i<=6;i++)
    {
        printf("%d nota: ",i);
        scanf("%f",&nota);
        media+=nota;
    }
    media = media/6.0;
    printf("\n");
    informaStatusAluno(media);

    return media;
}

void informaStatusAluno(float mediaAluno)
{
    if(mediaAluno < 5)
    {
        printf("Reprovado");
    }
    else if(mediaAluno < 7)
    {
        printf("Exame");
    }
    else
    {
        printf("Aprovado");
    }
}

float calculaMaiorMedia(float *vetor, int tam)
{
    float maiorMedia = 0;

    for(int i=0;i<tam;i++)
    {
        if(vetor[i] > maiorMedia)
        {
            maiorMedia = vetor[i];
        }
    }
    return maiorMedia;
}

void calculaMenorESegundaMenorMedia(float *vetor, int tam, float *menorMedia, float *segundaMenorMedia)
{
    *menorMedia = vetor[0];
    *segundaMenorMedia = vetor[0];

    for(int i=1;i<tam;i++)
    {
        if(*menorMedia > vetor[i])
        {
            if(i != 1)
            {
                *segundaMenorMedia = *menorMedia;
            }
            *menorMedia = vetor[i];
        }
        else if(*segundaMenorMedia > vetor[i])
        {
            *segundaMenorMedia = vetor[i];
        }
    }
}
