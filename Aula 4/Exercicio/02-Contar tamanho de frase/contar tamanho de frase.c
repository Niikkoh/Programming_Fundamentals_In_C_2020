#include<stdio.h>

int main()
{

    char frase[100];

    puts("Escreva uma frase");
    gets(frase);

    int i;
    for(i=0;i<100;i++)
    {
        if(frase[i] == '\0')
        {
            break;
        }
    }

    printf("\nA frase contem %d caracteres",i);

    return 0;
}
