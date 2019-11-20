#include<stdio.h>
#include<string.h>

void inverteString(char string[]);
void inverteConjuntoStrings(char conjuntoStrings[][50]);

int main()
{
    char conjuntoString[3][50];

    for(int i=0;i<3;i++)
    {
        printf("Escreva a %d palavra: ",i+1);
        gets(conjuntoString[i]);
    }

    inverteConjuntoStrings(conjuntoString);

    printf("\n\n");

    for(int i=0;i<3;i++)
    {
        printf("%s\n",conjuntoString[i]);
    }
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

void inverteConjuntoStrings(char conjuntoStrings[][50])
{
    for(int i=0;i<5;i++)
    {
        inverteString(conjuntoStrings[i]);
    }
}
