#include<stdio.h>

int main()
{

    float centigrados;

    for(int i=1;i<=100;i++)
    {
        centigrados = ((float)5/9) * (i - 32);
        printf("Fahrenheit: %d || Celsius: %.2f\n",i,centigrados);
    }
    return 0;
}
