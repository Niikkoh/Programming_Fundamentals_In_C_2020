#include<stdio.h>
#include<stdlib.h>

union NumCarac
{
    int num;
    char carac;
};


int main()
{

    union NumCarac teste;

    teste.num = 2;
    teste.carac = 'a';

    //printf("Numero: %d",teste.num);
    printf("\nCaractere: %c",teste.carac);

    return 0;
}
