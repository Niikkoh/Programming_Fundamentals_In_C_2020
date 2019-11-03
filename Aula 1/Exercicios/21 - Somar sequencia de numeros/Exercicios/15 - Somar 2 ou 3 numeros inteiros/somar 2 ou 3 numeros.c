#include<stdio.h>

int main()
{
    int escolha,soma,variavel1,variavel2;

    printf("Escolha uma opcao:\n1- Somar 2 inteiros\n2- Somar 3 inteiros\n");
    scanf("%d",&escolha);

    if(escolha == 1 || escolha == 2)
    {
        printf("\nInsira os inteiros:\n");
        scanf("%d",&variavel1);
        scanf("%d",&variavel2);

        soma = variavel1+variavel2;

        if(escolha == 2)
        {
            int variavel3;
            scanf("%d",&variavel3);
            soma+=variavel3;
        }

        printf("\nResultado da soma: %d",soma);
    }
    else
    {
        printf("\nEntrada Invalida");
    }

    return 0;
}
