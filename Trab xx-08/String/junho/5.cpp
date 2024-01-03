#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont;
    float b,e,res,res2;
    
    printf("Digite a base: ");
    scanf("%f",&b);
    printf("Digite o expoente: ");
    scanf("%f",&e);
	printf("%.2f^%.2f = \n",b,e);
	printf("%.2f.",b);
	res = b;
	
    for(cont = 1; cont<=e-1; cont++){
		res2 = res*b;
		res = res2;
		printf("%.2f.",b);
    }
    printf(" = %.2f",res2);
}

