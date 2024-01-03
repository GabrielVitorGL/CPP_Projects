#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>

void ler_tecla(){
	if(GetKeyState(VK_SPACE) & 0x8000){
		printf("\r%02d");

	}
}

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int derrota=0;
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    @");
	printf("\n -----------------------------------------------");
	while (derrota==0){
		ler_tecla();
		sleep(3);
	}
}
