#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>

class game
{
private:
    std::vector <int> fake;
    char map[1800];
    int x;//COORDINATES
    int c;
    int speed;
    int points ;
    int CurrentLevel;
    bool check;
public:
    game()
    {
        x = 1940;
        speed = 215;
        check = 0;
        points = 0;
    }
    void PrepareGraphics();
    void graphics();
    void LevelMenu();
    void Levels();
    void LOGIC();
    void gameover();
    friend void cls();
    friend void sp();
    friend void s();
};
void cls()
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}
void game::Levels() //Just minimize this function
////////////////////////////////////////////////////////////////////////////*//
{
    speed-=20;
    for(int a = 0;a < 1800;a++)
    {
        map[a] = ' ';           //CLEAN IT FIRST
    }
    switch(CurrentLevel)
    {
    case 1://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 26;b++)
    {
        map[b + 7] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 47] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 87] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 127] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 167] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 207] = char(253);
    }
    break;
    case 2://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 26;b++)
    {
        map[b + 7] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 47] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 87] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 127] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 167] = char(253);
    }
    for(int b = 0;b < 26;b++)
    {
        map[b + 207] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    break;
    case 3://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 30;b++)
    {
        map[b + 5] = char(253);
    }
    for(int b = 0;b < 30;b++)
    {
        map[b + 45] = char(253);
    }
    for(int b = 0;b < 30;b++)
    {
        map[b + 85] = char(253);
    }
    for(int b = 0;b < 30;b++)
    {
        map[b + 125] = char(253);
    }
    for(int b = 0;b < 30;b++)
    {
        map[b + 165] = char(253);
    }
    for(int b = 0;b < 30;b++)
    {
        map[b + 205] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    break;
    case 4://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 34;b++)
    {
        map[b + 3] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 43] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 83] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 123] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 163] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 203] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    break;
    case 5://///////////////////////////////////////////////////////////////*//

    for(int b = 0;b < 38;b++)
    {
        map[b + 1] = char(253);
    }
    for(int b = 0;b < 38;b++)
    {
        map[b + 41] = char(253);
    }
    for(int b = 0;b < 38;b++)
    {
        map[b + 81] = char(253);
    }
    for(int b = 0;b < 38;b++)
    {
        map[b + 121] = char(253);
    }
    for(int b = 0;b < 38;b++)
    {
        map[b + 161] = char(253);
    }
    for(int b = 0;b < 38;b++)
    {
        map[b + 201] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    break;
    case 6://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 34;b++)
    {
        map[b + 3] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 43] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 83] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 123] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 163] = char(253);
    }
    for(int b = 0;b < 34;b++)
    {
        map[b + 203] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 400] = char(253);
    }
    break;
    case 7://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 40;b++)
    {
        map[b] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 40] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 80] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 120] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 160] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 200] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    break;
    case 8://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 40;b++)
    {
        map[b] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 40] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 80] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 120] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 160] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 200] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 400] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 440] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 480] = char(253);
    }
    break;
    case 9://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 40;b++)
    {
        map[b] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 40] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 80] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 120] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 160] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 200] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 400] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[400 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[440 + 2 * b] = char(253);
    }
    break;
    case 10://///////////////////////////////////////////////////////////////*//
    for(int b = 0;b < 40;b++)
    {
        map[b] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 40] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 80] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 120] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 160] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 200] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 400] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[400 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[440 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[480 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[520 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[560 + 2 * b] = char(253);
    }
    break;
    case 11:
        for(int b = 0;b < 40;b++)
    {
        map[b] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 40] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 80] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 120] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 160] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 200] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 240] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 280] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 320] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 360] = char(253);
    }
    for(int b = 0;b < 40;b++)
    {
        map[b + 400] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[400 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[440 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[480 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[520 + 2 * b] = char(253);
    }
    for(int b = 0;b < 20 ;b++)
    {
        map[560 + 2 * b] = char(253);
    }
    break;

    default:
        system("cls");
        std::cout << "CONGRULATIONS ";
        Sleep(5000);
        }
PrepareGraphics();
}
//////////////////////////////////////////////////////////////////////////
void sp(int spalva)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), spalva);
}
void game::LevelMenu()
{
    std::cout <<"CONTROLS: > ^ < for moving and  1 / 2  for shooting...";
    Sleep(4500);
    system("cls");
    system("color a5");
    sp(481);
    std::cout << "CHOOSE YOUR LEVEL:";
    std::cout <<"1." << std::endl;
    std::cout <<"2." << std::endl;
    std::cout <<"3." << std::endl;
    std::cout <<"4." << std::endl;
    std::cout <<"5." << std::endl;
    std::cout <<"6." << std::endl;
    std::cout <<"7." << std::endl;
    std::cout <<"8." << std::endl;
    std::cout <<"9." << std::endl;
    std::cout <<"10."<< std::endl;
    std::cout <<"11."<< std::endl;
    int y;
    while(y > 12 || y < 1)
    {
        std::cin >> y;
    }
    if(y == 1)
    {
        CurrentLevel = 1;
        speed = 215;
    }
    else if(y == 2)
    {
        CurrentLevel = 2;
        speed = 195;
    }
    else if(y == 3)
    {
        CurrentLevel = 3;
        speed = 175;
    }
    else if(y == 4)
    {
        CurrentLevel = 4;
        speed = 155;
    }
    else if(y == 5)
    {
        CurrentLevel = 5;
        speed = 135;
    }
    else if(y == 6)
    {
        CurrentLevel = 6;
        speed = 115;
    }
    else if(y == 7)
    {
        CurrentLevel = 7;
        speed = 95;
    }
    else if(y == 8)
    {
        CurrentLevel = 8;
        speed = 75;
    }
    else if(y == 9)
    {
        CurrentLevel = 9;
        speed = 55;
    }
    else if(y == 10)
    {
        CurrentLevel = 10;
        speed =35 ;
    }
    else if(y == 11)
    {
        CurrentLevel = 11;
        speed = 28;
    }
    std::cout << "GET READY.";
    Sleep(2500);
    Levels();
}

void game::PrepareGraphics()
{
    x = 1140;
    map[x] = 'H';
    graphics();
}

void game::graphics()
{
    c = 0;
    for(int CheckingForWin = 0;CheckingForWin < 40;CheckingForWin++)
    {
        if(map[CheckingForWin] == ' ')
        {
            c++;
        }
    }
    if(c == 40)
    {
        CurrentLevel++;
        std::cout << "Congrulations,you have passed this level\n,let's try another one!";
        Sleep(4000);
        Levels();
    }
    std::cout << std::endl;
    for(int k = 0;k < 40;k++ )
    {
        std::cout << char(219);
    }
    std::cout << std::endl;

    for(int u = 0;u < 1800;u++)
    {
        if(u!= 0 && u % 40 == 0)
        {
            std::cout << std::endl;
        }
        /////////////////////////////////////
        /////////////////////////////////////
        /////////////////////////////////////
        if(map[u + 40] == char(173))
        {
            map[u + 40] = ' ';
            if(map[u]!=char(253))
            {
                map[u] = char(173);
            }
            else
            {
                map[u] = ' ';
                points++;
            }
        }
        else if(u <= 39 && map[u] == char(173))
        {
            map[u] = ' ';
        }
        if(map[u] == char(253) && map[u + 40 ] != char(253))
        {
            c = rand() % speed + 1;
            if(c == 5)
            {
                map[u + 40] = 'o';
            }
        };
        if(map[u] == 'o')
        {
            for(unsigned int g = 0;g != fake.size();g++)
            {
                    if(fake[g] == u)
                    {
                        g = fake.size() - 1;
                        check = 1;
                    }
            }
            if(!check)
            {
                map[u] = ' ';
                if(x == u + 40)
                {
                    gameover();
                }
                map[u + 40] = 'o';
                fake.push_back(u + 40);
            }
        };
        check = 0;
        std::cout << map[u];
    }
    for(int h = 1760;h < 1800;h++)
    {
        if(map[h] == 'o')
        {
            map[h] = ' ';
        }
    }
    fake.clear();
    std::cout << std::endl;
    for(int k = 0;k < 40;k++ )
    {
        std::cout << char(219);
    }
    std::cout << std::endl;
    std::cout << "\n\n\n\n            Points:" << points;
    LOGIC();
}

void game::gameover()
{
    system("cls");
    std::cout <<"GG,YOU'VE JUST LOSE!";
    std::cout <<"You scored " << points << " points\n";
    Sleep(2000);
    std::cout <<"Restarting...";
    Sleep(2000);
    system("cls");
    system("color a5");
    sp(481);
    LevelMenu();
}
void game::LOGIC()
{
             if (GetAsyncKeyState(VK_LEFT))
        {
            if(x % 40 != 0)
            {
                if(map[x - 1] == 'o')
                {
                    gameover();
                };
                x--;
                map[x + 1] = ' ';
                map[x] = 'H';
            }
        }
        else if (GetAsyncKeyState(VK_RIGHT))
        {
            if((x + 1) % 40 != 0)
            {
                if(map[x + 1] == 'o')
                {
                    gameover();
                };
                x++;
                map[x - 1] = ' ';
                map[x] = 'H';
            }
        }
        else if (GetAsyncKeyState(VK_UP))
        {
            if(x > 480)
            {
                x-=40;
                map[x+40] = ' ';
                map[x] = 'H';
            }
        }
        else if (GetAsyncKeyState(VK_DOWN))
        {
            if(x < 1760 )
            {
                x+=40;
                map[x - 40] = ' ';
                map[x] = 'H';
            }
        }
        else{}
        if(_kbhit())
        {
            char l = _getch();
            if(l == '1' || l == '2')
            {
                map[x - 40] = char(173);
            };
        }
    cls();
    graphics();
}

int main()
{
    system("color a5");
    sp(481);
    srand((unsigned)time(0));
    game *memb;
    memb = new game;
    memb->LevelMenu();
}
