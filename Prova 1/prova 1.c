#include <stdio.h>
#include <string.h>

#define TAM 5

int mediaIdade(int idadeClientes[], int tam, int defineSexo[]);
float mediaPrecos(float precosClientes[], int tam, int defineSexo[]);
void resposta(char nomesClientes[][50], int tam, int respostas[], int defineSexo[]);
void quantidadeMediaIdade(int idadeClientes[], int tam, int *menor, int *igual, int *maior, int defineSexo[]);
void quantidadeMediaPreco(float precosClientes[], int tam, int *menor, int *maior, int defineSexo[]);
int informaSexo(char sexoEntrevistado, char sexoEscolhido);
void selecionaSexo(int sexoEscolhido, int defineSexo[],char sexoEntrevistado[], int tam);

int main()
{
    char nomesClientes[TAM][50],nome[50];
    char sexoEntrevistado[TAM];
    int idadeClientes[TAM],respostas[TAM],defineSexo[TAM],escolha,sexoEscolha;
    float precosClientes[TAM];

    for(int i=0;i<TAM;i++)
    {
        printf("Preencha os dados do %d cliente:\n\nNome: ",i+1);
        fflush(stdin);
        gets(nome);
        strcpy(nomesClientes[i],nome);

        printf("Sexo: ");
        fflush(stdin);
        scanf("%c",&sexoEntrevistado[i]);

        printf("Idade: ");
        scanf("%d",&idadeClientes[i]);

        printf("Preco no produto: ");
        scanf("%f",&precosClientes[i]);

        printf("\nGostou do novo produto lancado?\n1-Sim\n2-Nao\n3-Indeciso\n");
        scanf("%d",&respostas[i]);

        system("cls");
    }

    escolha = 0;

    while(escolha != 6)
    {
        printf("Escolha uma funcao:\n\n");
        printf("1- Media de idade dos entrevistados\n");
        printf("2- Media de preco pago pelos entrevistados\n");
        printf("3- Repostas dos entrevistados\n");
        printf("4- Entrevistados com idade igual, acima e abaixo da media\n");
        printf("5- Entrevistados pagaram acima ou abaixo da media\n");
        printf("6- Sair\n");


        scanf("%d",&escolha);

        printf("\nSexo?\n");
        printf("1-Feminino\n");
        printf("2-Masculino\n");
        printf("3-Ambos\n");

        scanf("%d", &sexoEscolha);
        selecionaSexo(sexoEscolha,defineSexo,sexoEntrevistado,TAM);

        system("cls");

        switch(escolha)
        {
            case 1:
                {
                    int mediaId = mediaIdade(idadeClientes,TAM,defineSexo);
                    printf("Media da idade dos clientes: %d",mediaId);
                }
                break;
            case 2:
                {
                    float mediaPreco = mediaPrecos(precosClientes,TAM,defineSexo);
                    printf("Media de preco gasto pelos clientes: %.2f",mediaPreco);
                }
                break;
            case 3:
                {
                    resposta(nomesClientes,TAM,respostas,defineSexo);
                }
                break;
            case 4:
                {
                    int maior,menor,igual;
                    quantidadeMediaIdade(idadeClientes,TAM,&menor,&igual,&maior,defineSexo);

                    printf("Maior que a media de idade: %d\n",maior);
                    printf("Igual que a media de idade: %d\n",igual);
                    printf("Menor que a media de idade: %d",menor);
                }
                break;
            case 5:
                {
                    int maior,menor;
                    quantidadeMediaPreco(precosClientes,TAM,&menor,&maior,defineSexo);

                    printf("Maior que a media de preco: %d\n",maior);
                    printf("Menor que a media de preco: %d",menor);
                }
                break;
            default:
            {
                printf("Entrada invalida");
            }
        }

        printf("\n\nInsira qualquer numero para presseguir: ");
        scanf("%d",&sexoEscolha);
        system("cls");
    }

    return 0;
}

int mediaIdade(int idadeClientes[], int tam, int defineSexo[])
{
    int media,contador;

    media = 0;
    contador = 0;

    for(int i=0;i<tam;i++)
    {
        if(defineSexo[i] == 1)
        {
            media += idadeClientes[i];
            contador++;
        }
    }
    media = media / contador;

    return media;
}

float mediaPrecos(float precosClientes[], int tam, int defineSexo[])
{
    float media,contador;

    media = 0;
    contador = 0;

    for(int i=0;i<tam;i++)
    {
        if(defineSexo[i] == 1)
        {
            media += precosClientes[i];
            contador++;
        }
    }

    media = (float) media / tam;

    return media;
}

void resposta(char nomesClientes[][50], int tam, int respostas[3], int defineSexo[])
{
    for(int i=0;i<tam;i++)
    {
        if(defineSexo[i] == 1)
        {
            printf("%s :",nomesClientes[i]);
            switch(respostas[i])
            {
                case 1:
                    {
                        printf("Sim");
                    }
                    break;
                case 2:
                    {
                        printf("Nao");
                    }
                    break;
                case 3:
                    {
                        printf("Indefinido");
                    }
                    break;
                default:
                    {
                        printf("Entrada invalida");
                    }
            }
            printf("\n");
        }
    }
}

void quantidadeMediaIdade(int idadeClientes[], int tam, int *menor, int *igual, int *maior, int defineSexo[])
{
    int media,contador;
    media = mediaIdade(idadeClientes,tam,defineSexo);
    *menor = 0;
    *maior = 0;
    contador = 0;

    for(int i=0;i<tam;i++)
    {
        if(defineSexo[i] == 1)
        {
            if(idadeClientes[i] > media)
            {
                (*maior)++;
            }
            else if(idadeClientes[i] < media)
            {
                (*menor)++;
            }
            contador++;
        }
    }
    *igual = contador - (*maior + *menor);
}

void quantidadeMediaPreco(float precosClientes[], int tam, int *menor, int *maior, int defineSexo[])
{

    float media = mediaPrecos(precosClientes,tam,defineSexo);
    int contador;
    *menor = 0;
    *maior = 0;
    contador = 0;

    for(int i=0;i<tam;i++)
    {
        if(defineSexo[i] == 1)
        {
            if(precosClientes[i] > media)
            {
                (*maior)++;
            }
            contador++;
        }
    }
    *menor = contador - *maior;
}

int informaSexo(char sexoEntrevistado, char sexoEscolhido)
{
    if(sexoEntrevistado == sexoEscolhido)
    {
        return 1;
    }
    return 0;
}

void selecionaSexo(int sexoEscolhido, int defineSexo[],char sexoEntrevistado[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        if(sexoEscolhido == 1)
        {
            defineSexo[i] = informaSexo(sexoEntrevistado[i],'f');
        }
        else if(sexoEscolhido == 2)
        {
            defineSexo[i] = informaSexo(sexoEntrevistado[i],'m');
        }
        else
            defineSexo[i] = 1;
    }
}
