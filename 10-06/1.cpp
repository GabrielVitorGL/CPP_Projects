#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
    
    float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,soma,media;
    
    printf("Digite 10 valores para descobrir suas somas e suas m�dias: ");
    scanf("%f%f%f%f%f%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    soma = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    media = soma/10;
    printf("Soma: %.2f\nM�dia: %.2f\n",soma,media);
}
