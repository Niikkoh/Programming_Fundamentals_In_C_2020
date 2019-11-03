#include<stdio.h>

int main()
{
    int escolha;
    float resultado,variavel1,variavel2;

    printf("Escolha 1 entre as opcoes: \n\n1-Perimetro de uma circunferencia\n2-Area de um retangulo");
    printf("\n3-Area de um triangulo retangulo\n4-Volume de um cubo\n5-Volume de uma esfera\n");
    scanf("%d",&escolha);
    printf("\n");

    switch(escolha)
    {
        case 1:
            {
                printf("Insire o raio: ");
                scanf("%f",&variavel1);

                resultado = variavel1*2;

                printf("\nO perimetro da circunferencia e de %.2f PI", resultado);
            }
            break;
        case 2:
            {
                printf("Informe a largura: ");
                scanf("%f",&variavel1);
                printf("Informa a altura: ");
                scanf("%f",&variavel2);

                resultado = variavel1*variavel2;

                printf("\nArea do retangulo e %.2f",resultado);
            }
            break;
        case 3:
            {
                printf("Informe o cateto oposto: ");
                scanf("%f",&variavel1);
                printf("Informa o cateto adjacente: ");
                scanf("%f",&variavel2);

                resultado = (variavel1*variavel2)/2;

                printf("\nArea do retangulo e %.3f",resultado);
            }
            break;
        case 4:
            {
                printf("Informe o lado do cubo: ");
                scanf("%f",&variavel1);

                resultado = variavel1*variavel1*variavel1;

                printf("\nO volume do cubo e %.2f",resultado);
            }
            break;
        case 5:
            {
                printf("Informe o raio da esfera: ");
                scanf("%f",&variavel1);

                resultado = (4 * (variavel1*variavel1*variavel1))/3;

                printf("\nO volume da esfera e %.2f PI",resultado);
            }
            break;
        default:
            {
                printf("Entrada invalida");
            }
    }
    return 0;
}
