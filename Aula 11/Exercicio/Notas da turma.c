#include<stdio.h>
#include<string.h>

typedef struct discente
{
    char nome[50];
    float nota[2];
    float media;
}Discente;

void imprimeMenu();
void registraAluno(Discente* aluno);
void boletim(Discente* aluno,int alunosRegistrados);
void mediaGeral(Discente* aluno, int alunosRegistrados);
void maiorMediaESegundaMaior(Discente* aluno, int alunosRegistrados);
void alunosAcimaDasNotas(Discente* aluno, int alunosRegistrados);

int main()
{

    Discente aluno[100];

    int escolha,numRegistrado,continuar;
    numRegistrado=0;
    continuar=1;

    while(continuar)
    {
        imprimeMenu();
        scanf("%d",&escolha);
        system("cls");

        switch(escolha)
        {
            case 1:
                {
                    if(numRegistrado < 100)
                    {
                        registraAluno(&aluno[numRegistrado]);
                        numRegistrado++;
                    }
                    else
                    {
                        printf("O limite de alunos registrados foi atingido\n");
                    }
                    printf("\n");

                } break;
            case 2:
                {
                    boletim(aluno,numRegistrado);
                    printf("\n");
                } break;
            case 3:
                {
                    mediaGeral(aluno,numRegistrado);
                    printf("\n\n");
                } break;
            case 4:
                {
                    maiorMediaESegundaMaior(aluno,numRegistrado);
                    printf("\n\n");
                } break;
            case 5:
                {
                    alunosAcimaDasNotas(aluno,numRegistrado);
                    printf("\n\n");
                } break;
            case 6:
                {
                    continuar = 0;
                } break;
            default:
                {
                    printf("Entrada invalida\n\n");
                }
        }

        printf("Insira qualquer caractere para continuar\n");
        scanf("%d",&escolha);
        system("cls");
    }


    return 0;
}

void imprimeMenu()
{
    printf("Escolha uma opcao:");
    printf("\n\n1-Registrar aluno");
    printf("\n2-Boletim");
    printf("\n3-Media geral da turma");
    printf("\n4-Maior media, e segunda maior media");
    printf("\n5-Alunos acima da media");
    printf("\n6-Sair\n");
}

void registraAluno(Discente* aluno)
{
    char nome[50];
    printf("Registro de aluno\n\nNome: ");
    fflush(stdin);
    gets(nome);
    strcpy(aluno->nome,nome);
    printf("\nParcial 1: ");
    scanf("%f",&aluno->nota[0]);
    printf("\nParcial 2: ");
    scanf("%f",&aluno->nota[1]);

    aluno->media = (aluno->nota[0]+aluno->nota[1])/2.0;

}

void boletim(Discente* aluno, int alunosRegistrados)
{
    for(int i=0;i<alunosRegistrados;i++)
    {
        printf("%s | P1: %.2f | P2: %.2f | M: %.2f",aluno[i].nome,aluno[i].nota[0],aluno[i].nota[1],aluno[i].media);

        if(aluno[i].media < 5)
        {
            printf(" | Reprovado");
        }
        else if(aluno[i].media < 7)
        {
            printf(" | Exame");
        }
        else
        {
            printf(" | Aprovado");
        }

        printf("\n");
    }
}

void mediaGeral(Discente* aluno, int alunosRegistrados)
{
    if(alunosRegistrados != 0)
    {
        float mediaG = 0;

        for(int i=0;i<alunosRegistrados;i++)
        {
            mediaG += aluno[i].media;
        }

        mediaG = (float) mediaG / alunosRegistrados;
        printf("Media geral: %.2f",mediaG);
    }
    else
    {
        printf("Nao existe nenhum aluno registrado para calcular a media geral");
    }
}

void maiorMediaESegundaMaior(Discente *aluno, int alunosRegistrados)
{
    float maiorNota,segundaNota;

    maiorNota = 0;
    segundaNota = 0;

    for(int i=0;i<alunosRegistrados;i++)
    {
        if(i == 0)
        {
            maiorNota = aluno[0].media;
            segundaNota = aluno[0].media;
        }
        else if(i == 1)
        {
            if(maiorNota < aluno[1].media)
            {
                maiorNota = aluno[1].media;
            }
            else
                segundaNota = aluno[1].media;
        }
        else
        {
            if(maiorNota < aluno[i].media)
            {
                segundaNota = maiorNota;
                maiorNota = aluno[i].media;
            }
            else if(segundaNota < aluno[i].media)
            {
                segundaNota = aluno[i].media;
            }
        }
    }
    printf("Maior nota : %.2f\n",maiorNota);
    printf("Segunda maior nota: %.2f",segundaNota);
}

void alunosAcimaDasNotas(Discente* aluno, int alunosRegistrados)
{
    int quantParcial1, quantParcial2, quantMedia;
    float mediaGeral,mediaParcial1,mediaParcial2;

    quantParcial1 = 0;
    quantParcial2 = 0;
    quantMedia = 0;

    mediaGeral = 0;
    mediaParcial1 = 0;
    mediaParcial2 = 0;

    for(int i=0; i<alunosRegistrados; i++)
    {
        mediaGeral += aluno[i].media;
        mediaParcial1 += aluno[i].nota[0];
        mediaParcial2 += aluno[i].nota[1];
    }

    mediaGeral = (float) mediaGeral / alunosRegistrados;
    mediaParcial1 = (float) mediaParcial1 / alunosRegistrados;
    mediaParcial2 = (float) mediaParcial2 / alunosRegistrados;

    for(int i=0; i<alunosRegistrados; i++)
    {
        if(aluno[i].nota[0] > mediaParcial1)
        {
            quantParcial1++;
        }
        if(aluno[i].nota[1] > mediaParcial2)
        {
            quantParcial2++;
        }
        if(aluno[i].media > mediaGeral)
        {
            quantMedia++;
        }
    }

    printf("Alunos com nota acima da parcial 1: %d\n",quantParcial1);
    printf("Alunos com nota acima da parcial 2: %d\n",quantParcial2);
    printf("Alunos com nota acima da media: %d",quantMedia);
}
