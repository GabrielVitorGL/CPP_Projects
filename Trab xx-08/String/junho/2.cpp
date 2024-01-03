#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont,res;
    float num1,num2,temp;
    
    printf("Digite o primeiro número: ");
    scanf("%f",&num1);
    printf("Digite o segundo número: ");
    scanf("%f",&num2);
    if (num2<num1){
    	temp = num1;
    	num1 = num2;
    	num2 = temp;
	}
	res=num1;

    for(cont = num1; cont<=num2; cont++){
    		if(res % 2 != 0){
            printf("%d ",res);
        }
        res= res + 1;
    }
}

