#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont,res;
    float num1,num2,menor,maior;
    num2 = -9999999;
    printf("Digite 30 numeros: ");
    for(cont; cont<=30; cont++){
    	scanf("%f",&num1);
    	if (num1<num2){
    		num1=menor;
		}
		else if (num1>num2){
			num1=maior;
		}
		num2 = num1;
    }
    printf("Maior: %f\nMenor: %f",maior,menor);
}

