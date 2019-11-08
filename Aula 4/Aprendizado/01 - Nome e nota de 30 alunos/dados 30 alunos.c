#include<stdio.h>

int main()
{

    char nome[150];
    float notas[3];

    for(int i=0;i<30;i++)
    {

        fflush(stdin);

        printf("Escreva o nome do aluno: ");

        int j;

        for(j=0;j<149;j++)
        {
            scanf("%c",&nome[j]);
            if('\n' == nome[j])
            {
                break;
            }
        }

        nome[j] = '\0';

        printf("\nDigite a primeira nota do aluno: ");
        scanf("%f",&notas[0]);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f",&notas[1]);

        notas[2] = (notas[0]+notas[1]) / 2.0;

        printf("\nMedia do aluno(a) ");

        for(j=0;j<150;j++)
        {
            printf("%c",nome[j]);

            if(nome[j] == '\0')
            {
                break;
            }
        }
        printf("sera %.2f\n",notas[2]);
        scanf("%f",&notas[0]);
        system("cls");
    }

    return 0;
}
