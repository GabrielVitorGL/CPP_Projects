//Procedimento
void calcular_hora(int hora){
	if(hora>=0 && hora<12){
  		printf("Bom Dia");
	}
	else if(hora>=12 && hora<18){
    	printf("Boa Tarde");
	}
	else if(hora>=18 && hora<=24){
    	printf("Boa Noite");
	}
	else{
    	printf("Hora inválida");
	}
}
