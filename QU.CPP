int qgraph(int *l1,int *l2,int *l3,int *l4);
void p1(int,int,int,int,int,int);
int qno(int);
int coding(int,int **,int **,int **,int **,int);
int j=0;
void question()
{
int l1,l2,loop;
int l3,l4;
l1=0;l2=0;l3=0;l4=0;
do
{
j++;
loop=qgraph(&l1,&l2,&l3,&l4);
cleardevice();
// loop=coding(m,&l1,&l2,&l3,&l4,l);
}while(loop==10);
getch();
}
int qgraph(int *l1,int *l2,int *l3,int *l4)
 {
   int maxx=getmaxx();
   int maxy=getmaxy();
   setbkcolor(0);
   setcolor(3);
   rectangle(20,15,maxx-25,65);
  // gotoxy(5,2);
   //printf("%s",ques1);
  // outtextxy(40,25,"Who is Ptresident of India ?");
   int arr[20];
   setcolor(6);
   int l=p(maxx,maxy);
   int m=qno(l);

   rectangle(1,1,maxx-1,maxy-1);
   rectangle(6,6,maxx-6,maxy-6);
    line(6,280,maxx-6,280);
   line(6,308,maxx-6,308);
   p1(maxx,maxy,*l1,*l2,*l3,*l4);
   setcolor(11);
   settextstyle(12,0,40);
   setfillstyle(1,13);

   switch(j)
   {
	case 12:int poly[8];
		poly[0]=540;
		poly[1]=80;
		poly[2]=540;
		poly[3]=95;
		poly[4]=590+28;
		poly[5]=95;
		poly[6]=590+28;
		poly[7]=80;
		fillpoly(4,poly);
	case 11:
		poly[0]=540;
		poly[1]=95;
		poly[2]=540;
		poly[3]=110;
		poly[4]=590+28;
		poly[5]=110;
		poly[6]=590+28;
		poly[7]=95;
		fillpoly(4,poly);
	case 10:
		poly[0]=540;
		poly[1]=110;
		poly[2]=540;
		poly[3]=125;
		poly[4]=590+28;
		poly[5]=125;
		poly[6]=590+28;
		poly[7]=110;
		fillpoly(4,poly);
	case 9:
		poly[0]=540;
		poly[1]=125;
		poly[2]=540;
		poly[3]=140;
		poly[4]=590+28;
		poly[5]=140;
		poly[6]=590+28;
		poly[7]=125;
		fillpoly(4,poly);
	case 8:
		poly[0]=540;
		poly[1]=140;
		poly[2]=540;
		poly[3]=155;
		poly[4]=590+28;
		poly[5]=155;
		poly[6]=590+28;
		poly[7]=140;
		fillpoly(4,poly);
	case 7:
		poly[0]=540;
		poly[1]=155;
		poly[2]=540;
		poly[3]=170;
		poly[4]=590+28;
		poly[5]=170;
		poly[6]=590+28;
		poly[7]=155;
		fillpoly(4,poly);
	case 6:
		poly[0]=540;
		poly[1]=170;
		poly[2]=540;
		poly[3]=185;
		poly[4]=590+28;
		poly[5]=185;
		poly[6]=590+28;
		poly[7]=170;
		fillpoly(4,poly);
	case 5:
		poly[0]=540;
		poly[1]=185;
		poly[2]=540;
		poly[3]=200;
		poly[4]=590+28;
		poly[5]=200;
		poly[6]=590+28;
		poly[7]=185;
		fillpoly(4,poly);
	case 4:
		poly[0]=540;
		poly[1]=200;
		poly[2]=540;
		poly[3]=215;
		poly[4]=590+28;
		poly[5]=215;
		poly[6]=590+28;
		poly[7]=200;
		fillpoly(4,poly);
	case 3:
		poly[0]=540;
		poly[1]=215;
		poly[2]=540;
		poly[3]=230;
		poly[4]=590+28;
		poly[5]=230;
		poly[6]=590+28;
		poly[7]=215;
		fillpoly(4,poly);
	case 2:
		poly[0]=540;
		poly[1]=230;
		poly[2]=540;
		poly[3]=245;
		poly[4]=590+28;
		poly[5]=245;
		poly[6]=590+28;
		poly[7]=230;
		fillpoly(4,poly);
	case 1:

		poly[0]=540;
		poly[1]=245;
		poly[2]=540;
		poly[3]=260;
		poly[4]=590+28;
		poly[5]=260;
		poly[6]=590+28;
		poly[7]=245;
		fillpoly(4,poly);

   }
   outtextxy(542,85,"1 CRORE");
   outtextxy(542,100,"50,00,000");
   outtextxy(542,115,"25,00,000");
   outtextxy(542,130,"12,50,000");
   outtextxy(542,145,"6,40,000");
   outtextxy(542,160,"3,20,000");
   outtextxy(542,175,"1,60,000");
   outtextxy(542,190,"80,000");
   outtextxy(542,205,"40,000");
   outtextxy(542,220,"20,000");
   outtextxy(542,235,"10,000");
   outtextxy(542,250,"5,000");
   setcolor(13);
   settextstyle(8,0,1);
   /*outtextxy(50,332," 1: 50 - 50 ");
   outtextxy(l+90,332," 2: AUDIENCE POLE ");
   outtextxy(50,392," 3: SKIP ");
   outtextxy(l+90,392," 4: DOUBLE DIP ");   */
   _setcursortype(_NOCURSOR);
  int loop=coding(m,&l1,&l2,&l3,&l4,l);
   getch();
   return loop;
};
void p1(int a, int b,int l1,int l2,int l3,int l4)
{
	setcolor(3);
	int l=(a/2)-30;
	line(50,70+10,l,70+10);
	line(50,105+10,l,105+10);
	line(30,88+10,50,70+10);
	line(30,88+10,50,105+10);
	line(l+20,88+10,l,70+10);
	line(l+20,88+10,l,105+10);
	line(50,120+10,l,120+10);
	line(50,155+10,l,155+10);
	line(30,138+10,50,120+10);
	line(30,138+10,50,155+10);
	line(l+20,138+10,l,120+10);
	line(l+20,138+10,l,155+10);
	line(50,170+10,l,170+10);
	line(50,205+10,l,205+10);
	line(30,188+10,50,170+10);
	line(30,188+10,50,205+10);
	line(l+20,188+10,l,170+10);
	line(l+20,188+10,l,205+10);
	line(50,220+10,l,220+10);
	line(50,255+10,l,255+10);
	line(30,238+10,50,220+10);
	line(30,238+10,50,255+10);
	line(l+20,238+10,l,220+10);
	line(l+20,238+10,l,255+10);
	int poly[8];
	for(int i=0;i<4;i++)
	{
	if(i==0)
	{
	poly[0]=50;
	poly[1]=85;
	poly[2]=50;
	poly[3]=110;
	poly[4]=l;
	poly[5]=110;
	poly[6]=l;
	poly[7]=85;
	if(l1==0)
	setfillstyle(1,GREEN);
	else
	setfillstyle(1,RED);
	fillpoly(4,poly);
	}
	else if(i==1)
	{
	poly[0]=50;
	poly[1]=135;
	poly[2]=50;
	poly[3]=160;
	poly[4]=l;
	poly[5]=160;
	poly[6]=l;
	poly[7]=135;
	if(l2==0)
	setfillstyle(1,GREEN);
	else
	setfillstyle(1,RED);
	fillpoly(4,poly);
	}
	else if(i==2)
	{
	poly[0]=50;
	poly[1]=185;
	poly[2]=50;
	poly[3]=210;
	poly[4]=l;
	poly[5]=210;
	poly[6]=l;
	poly[7]=185;
	if(l3==0)
	setfillstyle(1,GREEN);
	else
	setfillstyle(1,RED);
	fillpoly(4,poly);
	}
	else
	{
	poly[0]=50;
	poly[1]=235;
	poly[2]=50;
	poly[3]=260;
	poly[4]=l;
	poly[5]=260;
	poly[6]=l;
	poly[7]=235;
	if(l4==0)
	setfillstyle(1,GREEN);
	else
	setfillstyle(1,RED);
	fillpoly(4,poly);
	}
	}
	setcolor(15);
	rectangle(a-117,70,a-6,270);
	rectangle(a-111,76,a-6,264);
	outtextxy(10,280,"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\OPTIONS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	setfillstyle(3,15);
	floodfill(a-113,73,15);
	floodfill(a-8,266,15);
	outtextxy(50,82," 5: 50:50");
	outtextxy(50,132," 6: AUDIENCE POLE ");
	outtextxy(50,182," 7: SKIP ");
	outtextxy(50,232," 8: DOUBLE DIP ");
	gotoxy(40,8);
	printf("ENTER YOUR CHOICE");

};
