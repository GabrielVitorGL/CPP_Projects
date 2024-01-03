//Função
int calcular_fatorial (int numero){

     int fatorial;

     for(fatorial = 1; numero > 1; numero = numero - 1){
         fatorial = fatorial * numero;
     }

    return (fatorial);
}
