#include<stdio.h>

int main()
{

    for(int i=1;i<=500;i++)
    {
        printf("%d - ",i);

        if(i%2 == 0)
        {
            printf("par\n");
        }
        else
        {
            printf("impar\n");
        }
    }

    return 0;
}
