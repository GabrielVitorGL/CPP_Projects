#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"portuguese");
    int cont;
    float n,r;
    
    printf("Digite um n�mero para saber seus 10 primeiros m�ltiplos: ");
    scanf("%f", &n);
    r = n;
    printf("  0\n");
    
    for(cont = 1; cont<=9; cont++){
              printf("  %.2f\n",r);
              r = r + n;          
    }
    system("pause");
    
}
