#include<stdio.h>

float area_quadrado();
float area_triang();

int main()
{
    float area = 0;

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
                area = area_quadrado();
            }
            break;
        case 2:
            {
                area = area_triang();
            }
            break;
    }

    system("cls");
    printf("A area sera %.2f",area);

    return 0;
}

float area_quadrado()
{
    float comprimento,area;

    printf("Digite o comprimento do quadrado: ");
    scanf("%f",&comprimento);

    area = comprimento*comprimento;

    return area;
}

float area_triang()
{
    float altura,largura,area;

    printf("Digite a altura do triangulo: ");
    scanf("%f",&altura);
    printf("Digite a largura do triangulo: ");
    scanf("%f",&largura);

    area = (altura*largura)/2.0;

    return area;
}

