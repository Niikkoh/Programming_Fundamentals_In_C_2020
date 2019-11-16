#include<stdio.h>

float calculaPerimetroQuadreado(float,float,float,float,float,float,float,float);
float calculaDistanciaDoisPontos(float,float,float,float);

int main()
{

    float x1,y1,x2,y2,x3,y3,x4,y4,perimetro;

    printf("Informe as coordenadas do primeiro ponto\nx: ");
    scanf("%f",&x1);
    printf("y: ");
    scanf("%f",&y1);

    printf("\n\nInforme as coordenadas do segundo ponto\nx: ");
    scanf("%f",&x2);
    printf("y: ");
    scanf("%f",&y2);

    printf("\n\nInforme as coordenadas do terceiro ponto\nx: ");
    scanf("%f",&x3);
    printf("y: ");
    scanf("%f",&y3);

    printf("\n\nInforme as coordenadas do quarto ponto\nx: ");
    scanf("%f",&x4);
    printf("y: ");
    scanf("%f",&y4);

    perimetro = calculaPerimetroQuadreado(x1,y1,x2,y2,x3,y3,x4,y4);

    printf("\n\nPerimetro dos pontos e: %.2f",perimetro);

    return 0;
}

float calculaPerimetroQuadreado(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
    float perimetro;

    perimetro = calculaDistanciaDoisPontos(x1,y1,x2,y2) + calculaDistanciaDoisPontos(x2,y2,x3,y3) + calculaDistanciaDoisPontos(x3,y3,x4,y4) + calculaDistanciaDoisPontos(x4,y4,x1,y1);

    return perimetro;
}

float calculaDistanciaDoisPontos(float x1, float y1, float x2, float y2)
{
    float distancia,i;

    distancia = ((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));

    i=0.0001;
    while(i*i<distancia)
    {
        i+=0.0001;
    }

    return i;
}
