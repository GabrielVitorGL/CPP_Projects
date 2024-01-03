#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

    int cont, n, fatorial;

    for(n = 1; n <= 10; n += 2)
    {

        fatorial = 1;

        for(cont=n; cont>1; cont--)

            fatorial *= cont;

        printf("%d  =  %d\n", n, fatorial);
    }

}
