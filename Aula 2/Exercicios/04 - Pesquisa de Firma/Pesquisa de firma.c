#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sexo,resposta,contadorSim,contadorNao,contadorSimF,contadorNaoM;

    contadorSim = 0;
    contadorNao = 0;
    contadorSimF = 0;
    contadorNaoM = 0;

    srand(time(NULL));

    for(int i=0;i<2000;i++)
    {
        sexo = rand() % 2;
        resposta = rand() % 2;

        if(resposta == 1)
        {
            contadorSim++;
            if(sexo == 1)
            {
                contadorSimF++;
            }
        }
        else
        {
            contadorNao++;
            if(sexo == 0)
            {
                contadorNaoM++;
            }
        }
    }

    printf("Pessoas que responderam sim : %d",contadorSim);
    printf("\nPessoas que responderam nao: %d",contadorNao);
    printf("\nPessoas do sexo feminino que responderam sim: %d",contadorSimF);
    printf("\nPessoas do sexo masculino que responderam nao: %d",contadorNaoM);

    return 0;
}
