#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
   	COORD coord; 
	coord.X = 0; 
	coord.Y = 1;
    int cacto;
    printf("\n\n\n\n\n\n\n\n\n\t\tиииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииииии");
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
    printf("\t\t\t\b@\n");
    srand(time(NULL));
    cacto = rand() % 15 + 5;
    sleep(3);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
    printf("\t\t\t\b\t\t\t\t\t\t\t\t\t  #\n");
    if(GetKeyState(VK_SPACE) & 0x8000)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
        printf("\t\t\t\b \b\n");
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
        printf("\t\t\t\b@\n");
        usleep(1100000);
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
        printf("\t\t\t\b \b\n");

        printf("\t\t\t\b@\n");
    }
}
