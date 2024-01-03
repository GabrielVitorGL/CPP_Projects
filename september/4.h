//Função
void maior_de_tres(float n1, float n2, float n3){		
	if (n1 >= n2 && n1 >= n3) printf("%.2f", n1);
	else if (n2 >= n1 && n2 >= n3) printf("%.2f", n2);
	else printf("%.2f", n3);
}
