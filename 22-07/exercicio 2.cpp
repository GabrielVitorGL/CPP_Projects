#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int num1,num2,inicial,resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segundo número: ");
    scanf("%d",&num2);
    inicial = num2;
    while(num1>=num2){
    	num2 = num2 + inicial;
    	resultado = resultado + 1;
	}
    printf("O resultado é: %d",resultado);
}
/*
Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer. Para a elaboração do programa, não utilizar em 
hipótese alguma utilizar o conceito do operador aritmético DIV. A solução deverá ser alcançada com a utilização de looping.
*/
