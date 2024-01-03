#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont;
    float num1,res,res2;
    
    printf("Digite um número para saber seu fatorial: ");
    scanf("%f",&num1);
    res = num1*(num1-1);
    printf("%.2f! = ",num1);
    
    for(cont = 1; cont=num1-2; cont++){
    	num1= num1-1;
		res2 = res*(num1-1);
		res = res2;
    }
    printf("%.2f",res);
}

