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

int calc_idade(struct Pessoa p, int dia, int mes, int ano);

int main()
{
    struct Pessoa pessoas[2];

    strcpy(pessoas[0].nome,"Nicolas");
    strcpy(pessoas[1].nome,"Alice");

    pessoas[0].dia = 2;
    pessoas[0].mes = 7;
    pessoas[0].ano = 2000;

    pessoas[1].dia = 3;
    pessoas[1].mes = 2;
    pessoas[1].ano = 2011;

    pessoas[0].idade = calc_idade(pessoas[0],13,12,2019);
    pessoas[1].idade = calc_idade(pessoas[1],13,12,2019);

    printf("%s tem %d anos",pessoas[0].nome,pessoas[0].idade);
    printf("\n%s tem %d anos",pessoas[1].nome,pessoas[1].idade);

    return 0;
}

int calc_idade(struct Pessoa p, int dia, int mes, int ano)
{

    int idade = ano - p.ano;

    if(mes > p.mes && (mes == p.mes && dia >= p.dia))
    {
        idade-=1;
    }

    return idade;
}
