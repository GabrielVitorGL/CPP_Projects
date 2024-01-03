void explicacao(){
	printf("\tHuguinho- 1\n\tZezinho- 2\n\tLuizinho- 3\n\tParar a contagem- 0\n");
	printf("\tPara votar nulo digite qualquer outro número\n\n");
}
float huguinhosub(float huguinho){
	return (huguinho+1);
}

float luizinhosub(float luizinho){
	return (luizinho+1);
}

float zezinhosub(float zezinho){
	return (zezinho+1);
}
float nulosub(float nulo){
	return (nulo+1);
}
float total(float huguinho, float luizinho, float zezinho){
	return(huguinho + zezinho + luizinho);
}
float hugporcentsub(float huguinho, float totalvotos){
	return ((huguinho/totalvotos)*100);
}
float zezporcentsub(float zezinho, float totalvotos){
	return ((zezinho/totalvotos)*100);
}
float luizporcentsub(float luizinho, float totalvotos){
	return ((luizinho/totalvotos)*100);
}
void apuracao(float totalvotos, float hugporcent, float zezporcent, float luizporcent, float huguinho, float luizinho, float zezinho, int nulo){
	printf("\nAPURAÇÃO\n\n");
	if (hugporcent >= zezporcent && zezporcent >= luizporcent) printf("1.o -> 1 - Huguinho - %.0f votos - %.2f%%\n2.o -> 2 - Zezinho - %.0f votos - %.2f%%\n3.o -> 3 - Luizinho - %.0f votos - %.2f%%\n\nNulos: %d", huguinho, hugporcent, zezinho, zezporcent, luizinho, luizporcent, nulo);
  	else if (hugporcent >= luizporcent && luizporcent >= zezporcent) printf("1.o -> 1 - Huguinho - %.0f votos - %.2f%%\n2.o -> 3 - Luizinho - %.0f votos - %.2f%%\n3.o -> 2 - Zezinho - %.0f votos - %.2f%%\n\nNulos: %d", huguinho, hugporcent, luizinho, luizporcent, zezinho, zezporcent, nulo);
  	else if (zezporcent >= hugporcent && hugporcent >= luizporcent) printf("1.o -> 2 - Zezinho - %.0f votos - %.2f%%\n2.o -> 1 - Huguinho - %.0f votos - %.2f%%\n3.o -> 3 - Luizinho - %.0f votos - %.2f%%\n\nNulos: %d", zezinho, zezporcent, huguinho, hugporcent, luizinho, luizporcent, nulo);
  	else if (zezporcent >= luizporcent && luizporcent >= hugporcent) printf("1.o -> 2 - Zezinho - %.0f votos - %.2f%%\n2.o -> 3 - Luizinho - %.0f votos - %.2f%%\n3.o -> 1 - Huguinho - %.0f votos - %.2f%%\n\nNulos: %d", zezinho, zezporcent, luizinho, luizporcent, huguinho, hugporcent, nulo);
  	else if (luizporcent >= hugporcent && hugporcent >= zezporcent) printf("1.o -> 3 - Luizinho - %.0f votos - %.2f%%\n2.o -> 1 - Huguinho - %.0f votos - %.2f%%\n3.o -> 2 - Zezinho - %.0f votos - %.2f%%\n\nNulos: %d", luizinho, luizporcent, huguinho, hugporcent, zezinho, zezporcent, nulo);
  	else printf("1.o -> 3 - Luizinho - %.0f votos - %.2f%%\n2.o -> 2 - Zezinho - %.0f votos - %.2f%%\n3.o -> 1 - Huguinho - %.0f votos - %.2f%%\n\nNulos: %d", luizinho, luizporcent, zezinho, zezporcent, huguinho, hugporcent, nulo);
}
