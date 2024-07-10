#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x , int y);
void draw_box(void);
void hidecursor(void);
int main(void)
{
    char * str[4] = {"1] Start New Game                ","2] Option                        ",
    "3] About                         ","4] Exit                          "};
    int pos = 1;
    char ch;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    hidecursor();
    draw_box();
     
        
    do
    {   
        SetConsoleTextAttribute(console , 15);
        gotoxy(40,11); printf("%s",str[0]);  
        gotoxy(40,12); printf("%s",str[1]);  
        gotoxy(40,13); printf("%s",str[2]);  
        gotoxy(40,14); printf("%s",str[3]);  
       
        switch (pos)
        {
        case 1 : SetConsoleTextAttribute(console , 240); gotoxy(40,11); printf("%s",str[0]);   break;
        case 2 : SetConsoleTextAttribute(console , 240); gotoxy(40,12); printf("%s",str[1]);   break;
        case 3 : SetConsoleTextAttribute(console , 240); gotoxy(40,13); printf("%s",str[2]);   break;
        case 4 : SetConsoleTextAttribute(console , 240); gotoxy(40,14); printf("%s",str[3]);   break;
        }
        ch = getch();
        if(ch == -32 ) 
            ch = getch();
        switch(ch)
        {
            case 72 : pos--; if(pos ==0) pos =4; break; 
            case 80 : pos++; if(pos ==5) pos =1; break;; 
        }
    } while (ch != 13);
    gotoxy(45,16);
    SetConsoleTextAttribute(console , 15);
    printf("Your Selection is %d\n",pos);
    for(int i = 0 ; i < 1000000000;i++);
    gotoxy(40,17);
    SetConsoleTextAttribute(console , 240);
    printf("Thank You Eng Youssef Shawkey !");
    for(int i = 0 ; i < 1000000000;i++);
    gotoxy(50,18);
    SetConsoleTextAttribute(console , 15);
    printf("Good Bye !");
    for(;;);
    return 0;
}

void gotoxy(int x , int y)
{
    COORD coord = {0,0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coord );
}

void draw_box(void)
{
    gotoxy(39,10);  printf("%c",201);  //corner
    for(int i = 0 ; i < 33 ; i++) printf("%c",205); //line =====
    printf("%c",187); //corner

    for(int i = 0 ; i < 4 ; i++) // vertical lines
    {
        gotoxy(39 , 11+i);    
        printf("%c",186);
        for(int i = 0 ; i < 33 ; i++) printf("%c",32);
        printf("%c",186);
    }
    gotoxy(39,15);  printf("%c",200); 
    for(int i = 0 ; i < 33 ; i++) printf("%c",205);
    printf("%c",188);
}
void hidecursor(void)
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}