#include<stdio.h>

float area;

void area_quadrado();
void area_triang();

int main()
{
    area = 0;

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
                area_quadrado();
            }
            break;
        case 2:
            {
                area_triang();
            }
            break;
    }

    system("cls");
    printf("\nA area sera %.2f",area);

    return 0;
}

void area_quadrado()
{
    float comprimento;

    printf("Digite o comprimento do quadrado: ");
    scanf("%f",&comprimento);

    area = comprimento*comprimento;
}

void area_triang()
{
    float altura,largura;

    printf("Digite a altura do triangulo: ");
    scanf("%f",&altura);
    printf("Digite a largura do triangulo: ");
    scanf("%f",&largura);

    area = (altura*largura)/2.0;
    printf("%.2f",(altura*largura)/2.0);
}
