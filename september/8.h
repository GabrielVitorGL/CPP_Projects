//Função
float potencia (float base, float expoente){
	int cont=0;
	float result=1;
	
	while(cont !=expoente){
		result = result*base;
		cont= cont+1;
	}

	return(result);
}

