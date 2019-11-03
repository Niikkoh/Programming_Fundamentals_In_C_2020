#include<stdio.h>

int main()
{

    int inteiro;

    printf("Insira o numero: ");
    scanf("%d",&inteiro);

    switch(inteiro)
    {
        case 1:
        {
            printf("\nO numero inserido e 1");
        }
        break;
        case 2:
        {
            printf("\nO numero inserido e 2");
        }
        break;
        default:
        {
            printf("\nO numero inserido nao e nem 1 nem 2");
        }
    }
    return 0;
}
