#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    float n, guardar;
    
    printf("Digite n�meros para serem somados: ");
    scanf("%f", &n);
    guardar = n;
    while (n>0){
    scanf("%f", &n);
    guardar = guardar + n;
	}
	guardar = guardar + (n * -1);
	
	printf("soma: %.2f\n",guardar);
}
/*
Somar n�meros at� que seja digitado um valor negativo (nao considerar o numero negativo na soma)
    ENTRADA: 9 6 5 -3    SA�DA: 20
*/
