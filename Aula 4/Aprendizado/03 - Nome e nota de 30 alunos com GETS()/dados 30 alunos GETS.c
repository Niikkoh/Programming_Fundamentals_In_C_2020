#include<stdio.h>

int main()
{

    char nome[150];
    float nota[3];

    for(int i=0;i<30;i++)
    {
        fflush(stdin);
        printf("Digite o nome do aluno: ");
        gets(nome);

        printf("\nPrimeira nota: ");
        scanf("%f",&nota[0]);
        printf("Segunda nota: ");
        scanf("%f",&nota[1]);

        nota[2] = (nota[0]+nota[1])/2.0;

        printf("\nA media do(a) aluno(a) %s e %.2f\n",nome,nota[2]);
        scanf("%f",&nota[0]);
        system("cls");
    }
    return 0;
}
