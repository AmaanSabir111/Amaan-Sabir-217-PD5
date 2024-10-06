#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void player();
void enemy1();
void enemy2();
void enemy3();
void gotoxy(int x, int y);
void moveplayerLeft(int x, int y);
void moveplayerRight(int x, int y);
void moveplayerUp(int x, int y);
void moveplayerDown(int x, int y);
main()
{
    system("cls");
    printMaze();
    player();
    enemy1();
    enemy2();
    enemy3();
    while(true){
        int x,y;
        if(GetAsyncKeyState(VK_LEFT))
        {
            moveplayerLeft(x,y);
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            moveplayerRight(x,y);
        }
        if(GetAsyncKeyState(VK_UP))
        {
            moveplayerUp(x,y);
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            moveplayerDown(x,y);
        }
    }
}
void printMaze()
{
    cout << " ############################################################################################################################" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ############################################################################################################################" << endl;
}
void player()
{
    gotoxy(43, 29);
    cout << "           ____";
    gotoxy(43, 30);
    cout << "        __|    |__";
    gotoxy(43, 31);
    cout << "       |          |";
    gotoxy(43, 32);
    cout << "        ---O  O---   ";
}
void enemy1()
{
    gotoxy(13, 1);
    cout << "         _________ ";
    gotoxy(13, 2);
    cout << "        |         |";
    gotoxy(13, 3);
    cout << "         __|___|__";
    gotoxy(13, 4);
    cout << "         ********* ";
}
void enemy3()
{
    gotoxy(83, 1);
    cout << "         _________ ";
    gotoxy(83, 2);
    cout << "        |         |";
    gotoxy(83, 3);
    cout << "         __|___|__";
    gotoxy(83, 4);
    cout << "         ********* ";
}
void enemy2()
{
    gotoxy(47,1);
    cout << "         __________________ ";
    gotoxy(47, 2);
    cout << "        |                  |";
    gotoxy(47, 3);
    cout << "        |__________________|     ";
    gotoxy(47, 4);
    cout << "          |______________| ";
    gotoxy(47, 5);
    cout << "           |____________|  ";
    gotoxy(47, 6);
    cout << "             |________|  ";
    gotoxy(47, 7);
    cout << "               |____|  ";
    gotoxy(47, 8);
    cout << "                |__|  ";
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void moveplayerLeft(int x,int y){
    x=x-1;
    y=y;
}
void moveplayerRight(int x,int y){
    x=x+1;
    y=y;
}
void moveplayerUp(int x,int y){
    y=y+1;
    x=x;
}
void moveplayerDown(int x,int y){
    y=y-1;
    x=x;
}