#include<stdio.h>

int main()
{

    float latas,altura,largura,metro;
    int escolha;

    printf("Escolha uma situacao: \n1- O muro tem 15 m de largura e 3 m de altura e ");
    printf("1 lata de tinta suficiente para pintar 4 m2 do muro\n2- Valores personalizados\n");
    scanf("%d",&escolha);

    switch(escolha)
    {
        case 1:
        {
            largura = 15;
            altura = 3;
            metro = 4;
        }
        break;
        case 2:
        {
            printf("\n\nInsira a largura do muro: ");
            scanf("%f",&largura);
            printf("Insira a altura do muro: ");
            scanf("%f",&altura);
            printf("Metro quadrado por lata: ");
            scanf("%f",&metro);
        }
        break;
        default:
        {
            printf("Invalido");
        }
    }

    latas = (altura*largura)/metro;
    printf("\n\nSera possivel pintar o muro com %f de latas de tinta",latas);

    return 0;
}
