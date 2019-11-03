#include<stdio.h>

int main()
{

    int nota;

    printf("informe a nota do aluno: ");
    scanf("%d",&nota);

    switch(nota)
    {
        case 0:
        {
            printf("\nPior nota possivel");
        }
        break;
        case 10:
        {
            printf("\nMelhor nota possivel");
        }
        break;
        default:
        {
            printf("\nNota entre 0 e 10");
        }
    }
    return 0;
}
