#include <stdio.h>
#include <string.h>

void inverteString(char string[]);

int main()
{
    char string[50];

    puts("Escreva uma string:");
    gets(string);

    inverteString(string);

    printf("\n%s",string);

    return 0;
}

void inverteString(char string[])
{
    int tam;
    tam=0;

    while(string[tam] != '\0') { tam++;}

    char stringInv[tam+1];

    for(int i=0;i<tam;i++)
    {
        stringInv[i] = string[tam-i-1];
    }
    stringInv[tam] = '\0';
    strcpy(string,stringInv);
}
