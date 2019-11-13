#include<stdio.h>

float area_quadrado(float);
float area_triang(float, float);

int main()
{
    float ladoA,ladoB,area = 0;

    int escolha;

    puts("Escolha 1 opcao:\n1-Area Quadrado\n2-Area Triangulo Retangulo");

    do{
        scanf("%d",&escolha);
    }while(escolha != 1 && escolha != 2);

    printf("\n");

    switch(escolha)
    {
        case 1:
            {
                printf("Digite o comprimento do quadrado: ");
                scanf("%f",&ladoA);

                area = area_quadrado(ladoA);
            }
            break;
        case 2:
            {
                printf("Digite a altura do triangulo: ");
                scanf("%f",&ladoA);
                printf("Digite a largura do triangulo: ");
                scanf("%f",&ladoB);

                area = area_triang(ladoA,ladoB);
            }
            break;
    }

    system("cls");
    printf("A area sera %.2f",area);

    return 0;
}

float area_quadrado(float comprimento)
{
    float area;

    area = comprimento*comprimento;

    return area;
}

float area_triang(float altura, float largura)
{
    float area;

    area = (altura*largura)/2.0;

    return area;
}
