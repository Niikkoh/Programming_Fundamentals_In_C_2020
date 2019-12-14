#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome[30];
    int dia;
    int mes;
    int ano;
    int idade;
};

void calc_idade(struct Pessoa *p,int dia, int mes, int ano);

int main()
{
    struct Pessoa Nicolas;
    struct Pessoa Alice;

    strcpy(Nicolas.nome, "Nicolas");
    strcpy(Alice.nome, "Alice");

    Nicolas.dia = 2;
    Nicolas.mes = 7;
    Nicolas.ano = 2000;

    Alice.dia = 3;
    Alice.mes = 2;
    Alice.ano = 2011;

    calc_idade(&Nicolas,13,12,2019);
    calc_idade(&Alice,13,12,2019);

    printf("%s tem %d anos",Nicolas.nome, Nicolas.idade);
    printf("\n%s tem %d anos",Alice.nome, Alice.idade);

    return 0;
}

void calc_idade(struct Pessoa *p,int dia, int mes, int ano)
{
    p->idade = ano - p->ano;

    if(mes < p->mes || (mes == p->mes && dia < p->dia))
    {
        p->idade -= 1;
    }
}
