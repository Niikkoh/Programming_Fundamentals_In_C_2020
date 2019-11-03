#include<stdio.h>

//programa compara 2 inteiros

int main()
{

    int A = 2;
    int B = 1;

    if(A > B)
    {
        printf("A e maior que B");
    }
    else
        if(B > A)
        {
            printf("B e maior que A");
        }
        else
        {
            printf("A e B sao iguais");
        }

    return 0;
}
