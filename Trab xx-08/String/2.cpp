#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont;
    float num1,num2;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%f",&num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f",&num2);

    for(cont = num1 +1; cont<num2; cont++){
             printf("%d ",cont);
    }
}

