#include<stdio.h>

int main()
{
    float S;
    S=0;

    for(float i=1;i<=50;i++)
    {
        S+= ((i*2-1)/i);
    }
    printf("%.2f",S);

    return 0;
}
