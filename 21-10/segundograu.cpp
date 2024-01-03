#include <stdio.h>
#include <math.h>
#include <locale.h>

void ler_abc(float *aa, float *bb, float *cc){
	printf("Digite o valor de a: ");
    scanf("%f",aa);
    printf("Digite o valor de b: ");
    scanf("%f",bb);
    printf("Digite o valor de c: ");
    scanf("%f",cc);
}

float calcular_delta(float aa, float bb, float cc){
	return ((bb*bb)-4*aa*cc);
}

float bhaskara_positivo(float aa, float bb, float cc, float dltt){
	return ((-bb+(sqrt(dltt)))/(2*aa));
}

float bhaskara_negativo(float aa, float bb, float cc, float dltt){
	return ((-bb-(sqrt(dltt)))/(2*aa));
}

void checar_e_exibir(float aa, float bb, float cc, float dltt, float bskpp, float bsknn){
	printf("\nDelta: %.4f\n",dltt);
	if (aa==0)
		printf("a=0 Não é uma equação de segundo grau");
    else if (dltt<0)
		printf("\nO delta é negativo, então não é possível calcular X");
	else if (dltt==0)
		printf("\nComo o delta deu 0, só há um valor de X: %f",bskpp);
	else{
		printf("\nX': %.4f\n",bskpp);
   		printf("\nX'': %.4f\n",bsknn);
	}
}
int main (){
	
	setlocale(LC_ALL, "portuguese");

    float a, b, c, dlt, bskp, bskn;
	
	ler_abc(&a,&b,&c);
	
    dlt = calcular_delta(a,b,c);
    
    bskp = bhaskara_positivo(a,b,c,dlt);
    bskn = bhaskara_negativo(a,b,c,dlt);
    
	checar_e_exibir(a,b,c,dlt,bskp,bskn);
}
