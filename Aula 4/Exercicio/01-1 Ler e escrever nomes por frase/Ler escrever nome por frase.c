#include<stdio.h>

int main()
{

    char nome[150];

    for(int i=0;i<10;i++)
    {
        puts("Escreva o nome:");
        fflush(stdin);
        gets(nome);

        printf("\nO nome inserido foi %s\n\n",nome);
    }
    return 0;
}
