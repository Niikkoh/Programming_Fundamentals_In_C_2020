#include <stdio.h>

struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
};

int Calc_idade(struct Pessoa pessoa, int a);

int main()
{
    struct Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;

    Einstein.idade = Calc_idade(Einstein,2019);
    Newton.idade = Calc_idade(Newton,2019);

    printf("Idade de Einstein: %d",Einstein.idade);
    printf("\nIdade de Newton: %d",Newton.idade);

    return 0;
}

int Calc_idade(struct Pessoa pessoa, int a)
{
    int idade;

    idade = a - pessoa.ano;

    return idade;
}
