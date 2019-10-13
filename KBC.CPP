#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include"WELCOMEPAGE.CPP"
#include"QU.CPP"
#include"QNO.CPP"
#include"CODING.CPP"
void welcomepage();
void question();
void main()
{	system("cls");
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int maxx=getmaxx();
	int maxy=getmaxy();
	setbkcolor(BLUE);
	setcolor(WHITE);
	circle(300,230,100);
	circle(300,230,70);
	setfillstyle(8,8);
	floodfill(380,310,15);
	setfillstyle(3,9);
	floodfill(371,230,15);
	setfillstyle(7,9);
	floodfill(372,230,15);
	setfillstyle(10,3);
	floodfill(300,230,15);
	setcolor(WHITE);
	ellipse(335,230,0,360,35,4);
	ellipse(300,265,270,269,4,35);
	ellipse(265,230,0,360,35,4);
	ellipse(300,195,270,269,4,35);
	settextstyle(1, HORIZ_DIR,6);
	outtextxy(175,195,"CROREPATI");
	settextstyle(3, HORIZ_DIR,3);
	outtextxy(225,132,"KAUN BANEGA");
	outtextxy(260,295,"TECHNO");
	setcolor(RED);
	rectangle(10,10,maxx-10,maxy-10);
	rectangle(15,15,maxx-15,maxy-15);
	settextstyle(5,HORIZ_DIR,1);
	settextstyle(5,1,1);
	outtextxy(20,20,"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
	outtextxy(maxx-48,20,"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

	getch();
	cleardevice();
		welcomepage();
	cleardevice();
	question();
	closegraph();
}

