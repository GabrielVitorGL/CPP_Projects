#include <stdio.h>
#include <locale.h>
#include "subalgoritmos.h"


int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int voto, nulo, cont;
	float hugporcent, zezporcent, luizporcent, huguinho, zezinho, luizinho,totalvotos;
	
	explicacao();
	
	do{
		printf("Digite o voto: ");
		scanf("%d",&voto);
		if (voto==1) huguinho = huguinhosub(huguinho);
		else if (voto==2) zezinho = zezinhosub(zezinho);
		else if (voto==3) luizinho = luizinhosub(luizinho);
		else if (voto!=0) nulo = nulosub(nulo);
	}while(voto != 0);
	totalvotos = total(huguinho, luizinho,zezinho);
	hugporcent = hugporcentsub(huguinho, totalvotos);
	zezporcent = zezporcentsub(zezinho, totalvotos);
	luizporcent = luizporcentsub(luizinho, totalvotos);
	apuracao(totalvotos, hugporcent, zezporcent, luizporcent, huguinho, luizinho, zezinho, nulo);
}
