#include<stdio.h>

float calculaS(int);
float calculaPI(float);

int main()
{

    float pi;
    int sequencia;

    printf("Escreva a sequencia: ");

    do{
    scanf("%d",&sequencia);
    }while(sequencia < 10);

    pi = calculaPI(calculaS(sequencia));

    printf("\nResultado: %f",pi);

    return 0;
}

float calculaS(int sequencia)
{
    float s,conta,calculo;

    conta = 0;

    for(int i=1;i<=sequencia;i++)
    {
        calculo = (float)1.0 / ((i * 2.0 + 1)*(i * 2.0 + 1)*(i * 2.0 + 1));
        if(i%2 == 1)
        {
            conta+=calculo;
        }
        else
        {
            conta-=calculo;
        }
    }
    s = 1 - conta;
    return s;
}

float calculaPI(float s)
{
    float PI,multiplicacao;

    multiplicacao = 32 * s;

    PI=0.00001;

    while(PI*PI*PI < multiplicacao)
    {
        PI+=0.00001;
    }

    return PI;
}
