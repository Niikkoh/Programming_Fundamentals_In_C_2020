#include<stdio.h>

int main()
{

    char original[200],modificado[201],caractere;
    int posicao,tamanho;

    puts("Insira uma frase:");
    gets(original);

    fflush(stdin);
    puts("\nCaractere:");
    scanf("%c",&caractere);

    for(tamanho=0;tamanho<200;tamanho++)
    {
        if(original[tamanho] == '\0')
        {
            break;
        }
    }

    puts("\nPosicao:");
    scanf("%d",&posicao);
    while(posicao > tamanho || posicao < 0)
    {
        puts("Posicao Invalida");
        scanf("%d",&posicao);
    }

    int i;
    for(i=0;i<tamanho+1;i++)
    {
        if(i < posicao)
        {
            modificado[i] = original[i];
        }
        else if(i == posicao)
        {
            modificado[i] = caractere;
        }
        else
            modificado[i] = original[i-1];
    }
    modificado[i] = '\0';

    printf("\n\nOriginal: %s\nModificado: %s",original,modificado);

    return 0;
}
