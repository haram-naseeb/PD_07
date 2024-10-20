#include<iostream>
#include<windows.h>
using namespace std;
void title();
void maze();
void gotoxy(int x,int y);
void gotoab(int a,int b);
void gotomn(int m,int n);
void gotocd(int c,int d);
void gotopq(int p,int q);
void gotoef(int e,int f);
char getCharAtab(short int a, short int b);

void printbonus();
void eraseenemy1();
void printenemy1();
void moveenemy1();
void eraseenemy2();
void printenemy2();
void moveenemy2();
void eraseenemy3();
void printenemy3();
void moveenemy3();
void printhero();
void erasehero();
void heroleft();
void heroup();
void herodown();
void heroright();

bool bonuscollect=false;
int score=0;
int x=45,y=7;
int a=3,b=19;
int m=110,n=21;
int c=100,d=17;


main()
{
system("cls");
title();
maze();
printbonus();
gotoef(2,28);
cout<<"Score: "<<score;
while(true)
{
if(GetAsyncKeyState(VK_LEFT))
{
   heroleft();
}
if(GetAsyncKeyState(VK_RIGHT))
{
   heroright();
}
if(GetAsyncKeyState(VK_DOWN))
{
  herodown();
}
if(GetAsyncKeyState(VK_UP))
{
  heroup();
}
moveenemy3();
moveenemy1();
moveenemy2();
Sleep(200);
}
}

void heroup()                            //HERO
{
  if (getCharAtab(a,b+19)==' ')
  {
  erasehero();
  b=b-1;
  printhero();
  if(!bonuscollect && a<=35 && a+7>=35 && b<=15 && b+2>=15)
  {
    score+=1;
    bonuscollect=true;
    gotoef(2,28);
    cout<<"score: "<<score;
  }
  }
}
void herodown()
{
  if(getCharAtab(a,b-17)==' ')
  {
  erasehero();
  b=b+1;
  printhero();
  if(!bonuscollect && a<=35 && a+7>=35 && b<=15 && b+2>=15)
  {
    score+=1;
    bonuscollect=true;
    gotoef(2,28);
    cout<<"score: "<<score;
  }
  }
} 
void heroleft()
{
  if (getCharAtab(a-1,b)==' ')
  {
  erasehero();
  a=a-1;
  printhero();
  if(!bonuscollect && a<=35 && a+7>=35 && b<=15 && b+2>=15)
  {
    score+=1;
    bonuscollect=true;
    gotoef(2,28);
    cout<<"score: "<<score;
  }
  }
}
void heroright()
{
  if (getCharAtab(a+11,b)==' ')
  {
  erasehero();
  a=a+1;
  printhero();
  if(!bonuscollect && a<=35 && a+7>=35 && b<=15 && b+2>=15)
  {
    score+=1;
    bonuscollect=true;
    gotoef(2,28);
    cout<<"score: "<<score;
  }
  }
}
void printhero()
{
gotoxy(a,b);
cout<<"(\\ _ /) ";
gotoxy(a,b+1);
cout<<"( 'X' ) ";
gotoxy(a,b+2);
cout<<"c(')(')";
}
void erasehero()
{
gotoxy(a,b);
cout<<"       ";
gotoxy(a,b+1);
cout<<"       ";
gotoxy(a,b+2);
cout<<"        ";
}
void gotoab(int a,int b)
{
COORD coordinates;
coordinates.X=a;
coordinates.Y=b;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
char getCharAtab(short int a, short int b)
{
  CHAR_INFO ci;
  COORD xy={0,0};
  SMALL_RECT rect={a,b,a,b};
  COORD coordBufsize;
  coordBufsize.X=1;
  coordBufsize.Y=1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci, coordBufsize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}


void printenemy1()                          //Enemy 1
{
gotoxy(x,y);
cout<<"  _____";
gotoxy(x,y+1);
cout<<" ( O o )";
gotoxy(x,y+2);
cout<<" /  O  \\";
gotoxy(x,y+3);
cout<<"/       \\";
}
void eraseenemy1()
{
gotoxy(x,y);
cout<<"          ";
gotoxy(x,y+1);
cout<<"          ";
gotoxy(x,y+2);
cout<<"          ";
gotoxy(x,y+3);
cout<<"          ";
}
void moveenemy1()
{
eraseenemy1();
y=y+1;
if(y==22)
  {
  y=7;
  }
printenemy1();
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


void printenemy2()                    //Enemy 2
{
gotoxy(m,n);
cout<<"  _____";
gotoxy(m,n+1);
cout<<" ( O o )";
gotoxy(m,n+2);
cout<<" /  O  \\";
gotoxy(m,n+3);
cout<<"/       \\";
}
void eraseenemy2()
{
gotoxy(m,n);
cout<<"          ";
gotoxy(m,n+1);
cout<<"          ";
gotoxy(m,n+2);
cout<<"          ";
gotoxy(m,n+3);
cout<<"          ";
}
void moveenemy2()
{
eraseenemy2();
m=m-1;
if(m==60)
  {
  m=110;
  }
printenemy2();
}
void gotomn(int m,int n)
{
COORD coordinates;
coordinates.X=m;
coordinates.Y=n;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


void printenemy3()                            //Enemy 3
{
gotocd(c,d);
cout<<"  _____";
gotocd(c,d+1);
cout<<" ( O o )";
gotocd(c,d+2);
cout<<" /  O  \\";
gotocd(c,d+3);
cout<<"/       \\";
}
void eraseenemy3()
{
gotocd(c,d);
cout<<"           ";
gotocd(c,d+1);
cout<<"           ";
gotocd(c,d+2);
cout<<"           ";
gotocd(c,d+3);
cout<<"           ";
}
void moveenemy3()
{
eraseenemy3();
d=d-1;
c=c-2;
if(d==5)
    {
    c=100;
    d=17;
    }
printenemy3();
}
void gotocd(int c,int d)
{
COORD coordinates;
coordinates.X=c;
coordinates.Y=d;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


void title()
{
cout<<"                            #####    #    #   ##    #   ##    #   #   #       #####     #    #   ##    #                            "<<endl;
cout<<"                            #    #   #    #   # #   #   # #   #    # #        #    #    #    #   # #   #                            "<<endl;
cout<<"                            #####    #    #   #  #  #   #  #  #     #         #####     #    #   #  #  #                            "<<endl;
cout<<"                            #    #   #    #   #   # #   #   # #     #         #    #    #    #   #   # #                            "<<endl;
cout<<"                            #####     ####    #    ##   #    ##     #         #     #    ####    #    ##                            "<<endl;
} 


void maze()
{
cout<<"**********************************************************************************************************************************************"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        F   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        I   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        N   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        I   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        S   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        H   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"**********************************************************************************************************************************************"<<endl;
}


void printbonus()                               //pill
{
  gotopq(35,15);
  cout<<"0";
}
void gotopq(int p,int q)
{
  COORD coordinates;
  coordinates.X=p;
  coordinates.Y=q;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


void gotoef(int e,int f)
{
  COORD coordinates;
  coordinates.X=e;
  coordinates.Y=f;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}