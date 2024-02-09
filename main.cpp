#include <iostream>
#include <windows.h>
#include <conio.h>
#include <shellapi.h>

// i used a tutorial for this lmao

void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

using namespace std;

int main()
{
    printf("CP7GDPS Launcher | Made by zChar");
    int Set[] = {7,7,7}; // default colors
    int counter = 2;
    char key;

    for (int i = 0 ;;)
    {
        gotoxy(12,8);
        color(Set[0]);
        cout << "Play";

        gotoxy(12,9);
        color(Set[1]);
        cout << "Open Local Appdata";

        gotoxy(12,10);
        color(Set[2]);
        cout << "Discord";

        gotoxy(12,11);
        color(Set[3]);
        cout << "Exit";

        key = _getch();

        if(key == 72 && (counter >=2 && counter <=4))
        {
            counter --;
        }
        if(key == 80 && (counter >=1 && counter <=3))
        {
            counter ++;
        }
        if (key == '\r')//carriage return = enter
        {
            if(counter == 1)
            {
                system("CP7GDPS.exe");
            }
            if(counter == 2)
            {
                system("start %localappdata%");
            }
            if(counter == 3)
            {
                system("start https://discord.gg/2J7VPVMFAY");
            }
            if(counter == 4)
            {
                exit(0);
            }
        }
        Set[0] = 7; // white
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        if (counter == 1)
        {
            Set[0] = 12; // 12 = color red
        }
        if (counter == 2)
        {
            Set[1] = 12; // 12 = color red
        }
        if (counter == 3)
        {
            Set[2] = 12; // 12 = color red
        }
        if (counter == 4)
        {
            Set[3] = 12;
        }

    }

    return 0;
}

