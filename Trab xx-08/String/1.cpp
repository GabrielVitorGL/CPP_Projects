#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont;
    float num,mult,res;
    
    printf("Digite um número para saber sua tabuada: ");
    scanf("%f",&num);
    res = num;
    mult = 1;
    printf(" %.2f X 0 = 0,00\n",num);

    for(cont = 1; cont<=10; cont++){
             printf(" %.2f X %.0f = %.2f\n",num,mult,res);
             mult = mult + 1;
             res = res + num;
    }
    system("pause");
}
              
