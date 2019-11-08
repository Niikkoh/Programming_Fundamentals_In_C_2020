#include<stdio.h>

int main()
{

    char nome[150];

    for(int i=0;i<150;i++)
    {
        fflush(stdin);
        printf("Insira o nome do usuario: ");

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

        printf("\nO nome inserido foi ");

        for(j=0;j<150;j++)
        {
            printf("%c",nome[j]);
            if(nome[j] == '\0')
            {
                break;
            }
        }
        printf("\n\n\n");
    }

    return 0;
}
