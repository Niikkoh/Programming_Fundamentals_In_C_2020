#include<stdio.h>

int main()
{

    char string[100];
    int contador = 0;

    puts("Escreva uma frase");
    gets(string);

    for(int i=0;i<99;i++)
    {
        if(string[i] == 'a' || string[i] == 'A' ||
           string[i] == 'e' || string[i] == 'E' ||
           string[i] == 'i' || string[i] == 'I' ||
           string[i] == 'o' || string[i] == 'O' ||
           string[i] == 'u' || string[i] == 'U')
        {
            contador++;
        }
        if(string[i] == '\0')
        {
            break;
        }
    }

    printf("\nExistem %d vogais na frase",contador);

    return 0;
}
