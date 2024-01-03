#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    int cont;
    float c,f;
    c=10;
    
    for(cont=10; cont<=19; cont++){
    	f=c*1.8+32;
    	printf("%.2fC = %.2fF\n",c,f);
    	c=c+10;
    }
}
