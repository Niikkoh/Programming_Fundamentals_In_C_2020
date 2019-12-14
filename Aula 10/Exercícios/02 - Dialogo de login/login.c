#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Login
{
    char login[16];
    char senha[16];
};

void imprimeMenu();
void registrar(struct Login *l,int registrado);
int efetuarLogin(struct Login *l, int registrado);

int main()
{
    struct Login login[10];
    int escolha,sair,registrados;

    sair = 1;
    registrados = 0;

    while(sair)
    {
        imprimeMenu();
        scanf("%d",&escolha);
        system("cls");

        switch(escolha)
        {
            case 1:
                {
                    if(registrados < 10)
                    {
                        registrar(login,registrados);
                        printf("\n\n");
                        registrados++;
                    }
                    else
                    {
                        printf("Foi excedido o limite de usuarios que podem ser registrados\n\n");
                    }
                    printf("Pressione qualquer tecla e enter para continuar\n");
                }
                break;
            case 2:
                {

                    if(efetuarLogin(login,registrados) == 1)
                    {
                        printf("\n\nLogin efetuado com sucesso");
                    }
                    else
                    {
                        printf("\n\nLogin recusado");
                    }
                    printf("\n\nPressione qualquer tecla e enter para continuar\n");
                }
                break;
            case 3:
                {
                    sair = 0;
                    printf("Pressione qualquer tecla e enter para sair\n");
                }
                break;
            default:
                {
                    printf("Entrada invalida\n\n");
                    printf("Pressione qualquer tecla e enter para continuar\n");
                }
        }

        scanf("%d",&escolha);
        system("cls");
    }
}

void imprimeMenu()
{
    printf("Digite a opcao:\n");
    printf("1 - Registro\n");
    printf("2 - Login\n");
    printf("3 - Sair\n");
}

void registrar(struct Login *l, int registrado)
{
    char nome[10];
    printf("Registro\n\nNome: ");
    fflush(stdin);
    gets(nome);
    strcpy(l[registrado].login,nome);
    printf("Senha: ");
    fflush(stdin);
    gets(nome);
    strcpy(l[registrado].senha,nome);
}

int efetuarLogin(struct Login *l, int registrado)
{
    char nome[10];
    char senha[10];

    printf("Login\n\nNome: ");
    fflush(stdin);
    gets(nome);
    printf("Senha: ");
    fflush(stdin);
    gets(senha);

    for(int i=0;i<registrado;i++)
    {
        if(strcmp(l[i].login,nome) == 0 && strcmp(l[i].senha,senha) == 0)
        {
            return 1;
        }
    }
    return 0;
}
