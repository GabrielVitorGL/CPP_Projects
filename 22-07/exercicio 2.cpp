#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int num1,num2,inicial,resultado;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d",&num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d",&num2);
    inicial = num2;
    while(num1>=num2){
    	num2 = num2 + inicial;
    	resultado = resultado + 1;
	}
    printf("O resultado �: %d",resultado);
}
/*
Elaborar um programa que apresente o resultado inteiro da divis�o de dois n�meros quaisquer. Para a elabora��o do programa, n�o utilizar em 
hip�tese alguma utilizar o conceito do operador aritm�tico DIV. A solu��o dever� ser alcan�ada com a utiliza��o de looping.
*/
