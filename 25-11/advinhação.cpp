#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");

	printf("Código por: Gabriel Vitor e Breno Jefferson\n\n\n");
	
	int x, sorteada[3][3], l, c, digitada[3][3], repetir=0, cont=0;
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
		sorteada[l][c] = rand() % 2;
		}	
	}
	
	printf("DIGITE NÚMEROS ENTRE 0 E 1 NA MATRIZ PARA TESTAR SUA SORTE!\n\n");
	for(l = 0; l < 3; l++)
		for(c = 0; c < 3; c++){
			do{
			printf("Digite a posição [%d][%d] = ", l, c);
			scanf("%d",&digitada[l][c]);
			repetir = 0;
			if(digitada[l][c]!=0 & digitada[l][c]!=1){
				printf("\nApenas números entre 1 e 0!\n");
				repetir=1;
				}
			}while(repetir == 1);
		}
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			if (digitada[l][c] == sorteada[l][c])
				cont++;
		}
	}
	printf("\nVocê acertou %d números\n",cont);
	
	switch (cont)
            {
            case 0:
            case 1:
                printf("Cara, investe no amor porque no jogo vc tá pessimo\n");
                break;
			case 2:
			case 3:
			case 4:
				printf("Estuda bastante porque vc não ficará rico pela megasena\n");
                break;
            case 5:
            	printf("Você atingiu a probabilidade de acertos\n");
            	break;
            case 6:
            case 7:
            case 8:
        	case 9:
        		printf("Venda seu cônjuje e compre uma viagem para las vegas\n");
        		break;
            default:
                printf("Vá agora jogar na megasena\n");
                break;
            }
    
	printf("\nMATRIZ SORTEADA: \n\n ");     
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++)
			printf("%d ", sorteada[l][c]);
		printf("\n ");
	}
	
	printf("\nMATRIZ DIGITADA: \n\n ");   
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++)
			printf("%d ", digitada[l][c]);
		printf("\n ");
	}

	setlocale(LC_ALL, "C");
	printf("\nACERTOS: \n\n");
	printf("%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
	for(l = 0; l < 3; l++){
		printf("%c",186);
		for(c = 0; c < 3; c++){
			if(sorteada[l][c] == digitada[l][c])
				printf(" v ");
			else
				printf("   ");
		}
		printf("%c\n",186);
	}
	printf("%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,188);
}
