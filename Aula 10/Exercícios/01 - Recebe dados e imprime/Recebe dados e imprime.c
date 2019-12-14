#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome[16];
    int idade;
};


int main()
{
    struct Pessoa pessoas[3];
    char nome[16];

    for(int i=0;i<3;i++)
    {
        printf("%d Usuario:\n\nNome: ",i+1);
        fflush(stdin);
        gets(nome);
        strcpy(pessoas[i].nome,nome);

        printf("Idade: ");
        scanf("%d",&pessoas[i].idade);

        system("cls");
    }

    for(int i=0;i<3;i++)
    {
        printf("%s tem %d anos\n",pessoas[i].nome,pessoas[i].idade);
    }

    return 0;
}
