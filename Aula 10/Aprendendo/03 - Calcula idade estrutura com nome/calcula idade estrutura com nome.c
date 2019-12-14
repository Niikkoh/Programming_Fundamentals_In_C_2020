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

int calc_idade(struct Pessoa pessoa, int ano, int mes, int dia);

int main()
{
    struct Pessoa Nicolas;

    strcpy(Nicolas.nome,"Nicolas");

    Nicolas.dia = 2;
    Nicolas.mes = 7;
    Nicolas.ano = 2000;

    Nicolas.idade = calc_idade(Nicolas,2019,12,12);

    printf("A idade do %s e de %d",Nicolas.nome,Nicolas.idade);

    return 0;
}

int calc_idade(struct Pessoa pessoa, int ano, int mes, int dia)
{
    int idade;

    if((pessoa.mes < mes) || (pessoa.mes == mes && pessoa.dia <= dia))
    {
        idade = ano - pessoa.ano;
    }
    else
    {
        idade = ano - pessoa.ano - 1;
    }

    return idade;
}
