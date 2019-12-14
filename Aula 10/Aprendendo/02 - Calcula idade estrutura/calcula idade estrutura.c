#include <stdio.h>

struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
};

int calc_idade(struct Pessoa pessoa, int ano, int mes, int dia);

int main()
{

    struct Pessoa Nicolas;

    Nicolas.ano = 2000;
    Nicolas.mes = 7;
    Nicolas.dia = 2;

    Nicolas.idade = calc_idade(Nicolas,2019,12,12);

    printf("Idade do Nicolas e %d",Nicolas.idade);

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
