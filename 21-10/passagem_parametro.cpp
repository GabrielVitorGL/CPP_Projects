#include <stdio.h>

void ler_dados(int *aa, int *bb) //por referencia
{
	scanf("%d",aa);
	scanf("%d",bb);	
}

int somar(int aa, int bb) // por valor
{
	return (aa + bb);
}

int main()
{
	int a, b, c;

	ler_dados(&a, &b); // chamada do subalgoritmo por referencia
	c = a + b;
	printf("%d", c); 
	c = somar(a, b); //chamada do subalgoritmo por valor
	printf("%d", c);
}

/*
int incremento(int *x) // passagem de parâmetro por REFERÊNCIA
{
	*x = *x + 1;
	return (*x);
}

int main()
{
	int x = 5, y;
	y = incremento (&x);
	printf("x = %d | y = %d", x,y); 

/*
	scanf("%d", &x);
	printf("Valor de x = %d | Endereço de x = %d", x, &x);
	
}*/
