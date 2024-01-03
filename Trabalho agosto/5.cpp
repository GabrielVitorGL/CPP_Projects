#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int voto, nulo;
	float hugporcent, zezporcent, luizporcent, huguinho, zezinho, luizinho,totalvotos;
	
	printf("\tHuguinho- 1\n\tZezinho- 2\n\tLuizinho- 3\n\tParar a contagem- 0\n");
	printf("\tPara votar nulo digite qualquer outro número\n\n");

	do{
		printf("Digite o voto: ");
		scanf("%d",&voto);
		switch(voto){
			case 0: break;
			case 1: huguinho = huguinho + 1;break;
			case 2: zezinho = zezinho + 1;break;
			case 3: luizinho = luizinho + 1;break;
			default: nulo = nulo + 1;
		}
	}while(voto != 0);
	totalvotos = huguinho + zezinho + luizinho;
	hugporcent = (huguinho/totalvotos)*100;
	zezporcent = (zezinho/totalvotos)*100;
	luizporcent = (luizinho/totalvotos)*100;
	printf("\nAPURAÇÃO\n\n");
	if (hugporcent >= zezporcent && zezporcent >= luizporcent) printf("1.o -> 1 - Huguinho - %.0f votos - %.2f%%\n2.o -> 2 - Zezinho - %.0f votos - %.2f%%\n3.o -> 3 - Luizinho - %.0f votos - %.2f%%\n\nNulos: %d", huguinho, hugporcent, zezinho, zezporcent, luizinho, luizporcent, nulo);
  	else if (hugporcent >= luizporcent && luizporcent >= zezporcent) printf("1.o -> 1 - Huguinho - %.0f votos - %.2f%%\n2.o -> 3 - Luizinho - %.0f votos - %.2f%%\n3.o -> 2 - Zezinho - %.0f votos - %.2f%%\n\nNulos: %d", huguinho, hugporcent, luizinho, luizporcent, zezinho, zezporcent, nulo);
  	else if (zezporcent >= hugporcent && hugporcent >= luizporcent) printf("1.o -> 2 - Zezinho - %.0f votos - %.2f%%\n2.o -> 1 - Huguinho - %.0f votos - %.2f%%\n3.o -> 3 - Luizinho - %.0f votos - %.2f%%\n\nNulos: %d", zezinho, zezporcent, huguinho, hugporcent, luizinho, luizporcent, nulo);
  	else if (zezporcent >= luizporcent && luizporcent >= hugporcent) printf("1.o -> 2 - Zezinho - %.0f votos - %.2f%%\n2.o -> 3 - Luizinho - %.0f votos - %.2f%%\n3.o -> 1 - Huguinho - %.0f votos - %.2f%%\n\nNulos: %d", zezinho, zezporcent, luizinho, luizporcent, huguinho, hugporcent, nulo);
  	else if (luizporcent >= hugporcent && hugporcent >= zezporcent) printf("1.o -> 3 - Luizinho - %.0f votos - %.2f%%\n2.o -> 1 - Huguinho - %.0f votos - %.2f%%\n3.o -> 2 - Zezinho - %.0f votos - %.2f%%\n\nNulos: %d", luizinho, luizporcent, huguinho, hugporcent, zezinho, zezporcent, nulo);
  	else printf("1.o -> 3 - Luizinho - %.0f votos - %.2f%%\n2.o -> 2 - Zezinho - %.0f votos - %.2f%%\n3.o -> 1 - Huguinho - %.0f votos - %.2f%%\n\nNulos: %d", luizinho, luizporcent, zezinho, zezporcent, huguinho, hugporcent, nulo);
}
