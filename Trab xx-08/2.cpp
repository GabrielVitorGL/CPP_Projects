#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "delta.h"
#include "bhaskara.h"

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
    float a;
    float b;
    float c;
    float dlt;
    float bskp;
    float bskn;

    printf("Bem vindo, por favor digite o valor de a: ");
    scanf("%f",&a);
    printf("Obrigado, agora digite o valor de b: ");
    scanf("%f",&b);
    printf("Ok, agora digite o valor de c: ");
    scanf("%f",&c);
    dlt = (b*b)-4*a*c;
	bskp = (-b+(sqrt(dlt)))/(2*a);
    bskn = (-b-(sqrt(dlt)))/(2*a);
   	printf("\nDelta: %.4f\n",dlt);
    if (a==0)printf("a=0 Não é uma equação de segundo grau\n");
	if (dlt==0)printf("\nComo o delta deu 0, só há um valor de X: %f\n\n\n\n",bskp);
	if (dlt<0)printf("\nO delta é negativo, então não é possível calcular X\n\n\n\n");
	if (dlt>0 and a!=0) {
		printf("\nX': %.4f\n",bskp);
   		printf("\nX'': %.4f\n\n\n\n",bskn);
	}

	system("pause");

}
