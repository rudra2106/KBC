int p(int,int);
void welcomepage()
 {	
  	   int maxx=getmaxx();
	   int maxy=getmaxy();
   	   setbkcolor(0);
  	   setcolor(6);
  	   settextstyle(3,0,2);
  	   outtextxy(120,1," Welcome To Kaun Banega Crorepati");
  	   setcolor(15);
  	   settextstyle(13,0,2);
  	   outtextxy(120,30,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
  	   settextstyle(3,0,2);
  	   setcolor(90);
  	   outtextxy(375,35,"             PrIzE MoNeY ");
  	   setcolor(5);
  	   outtextxy(170,40,"              RULES                                                ____________ ");
  	   setcolor(15);
  	   settextstyle(13,0,2);
   	   outtextxy(306,64,"~~~~~~~~ ");
  	   rectangle(1,1,maxx-1,maxy-1);
  	   rectangle(6,6,maxx-6,maxy-6);
  	   setcolor(5);
  	   settextstyle(12,0,12);
  	   outtextxy(5,70," *  You Will Be Presented With 12 Questions & Four Possible");
  	   outtextxy(5,80,"    Answers Ä Simply Choose The Correct Answer.");
  	   outtextxy(5,100," *  You Need To Answer As Many Questions As Possible Correctly");
  	   outtextxy(5,110,"    To Work Your Way Up The Money Tree And Stand A Chance Of");
  	   outtextxy(5,120,"     Winning Virtual 1 CRORE.");
  	   outtextxy(5,140," *  Each Question Is Worth A Maximum Of The Next Moneytree Value.");
  	   outtextxy(5,160," *  If You Answer Incorrectly, You Will Fall To The Last Place.");
  	   outtextxy(5,180," *  On Moneytree. You Have Four Lifelines Which Will Help You");
  	   outtextxy(5,190,"     To Reach Upto 1 CRORE.");
  	   outtextxy(5,210," *  You Can Take Each Lifeline Once");
  	   setcolor(15);
  	   settextstyle(3,0,1);
 	   outtextxy(10,280,"-------------------------------------LIFELINES-----------------------------------------");
    	   line(6,280,maxx-6,280);
  	   line(6,308,maxx-6,308);
 	   int l=p(maxx,maxy);
  	   setcolor(11);
 	   settextstyle(12,0,40);
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
	   settextstyle(8,0,2);
	   outtextxy(50,332," 1: 50 - 50 ");
	   outtextxy(l+90,332," 2: AUDIENCE POLE ");
	   outtextxy(50,392," 3: SKIP ");
	   outtextxy(l+90,392," 4: DOUBLE DIP ");
	   int k=1;
	   getch();
	   if(k%2==0)
	   {
	   settextstyle(3,0,2);
	   setcolor(90);
	   outtextxy(375,35,"             PrIzE MoNeY ");
	   }
	   else
	   {
	   settextstyle(3,0,2);
	   setcolor(15);
	   outtextxy(375,35,"             PrIzE MoNeY ");
	   }
	   _setcursortype(_NOCURSOR);
	   getch();
	};
	int p(int a, int b)
	{
		int l=(a/2)-60;
		line(50,330,l,330);
		line(50,365,l,365);
		line(30,348,50,330);
		line(30,348,50,365);
		line(l+20,348,l,330);
		line(l+20,348,l,365);
		line(a-70,330,l+90,330);
		line(a-70,365,l+90,365);
		line(l+70,348,l+90,330);
		line(l+70,348,l+90,365);
		line(a-50,348,a-70,330);
		line(a-50,348,a-70,365);
		line(50,390,l,390);
		line(50,425,l,425);
		line(30,408,50,390);
		line(30,408,50,425);
		line(l+20,408,l,390);
		line(l+20,408,l,425);
		line(a-70,390,l+90,390);
		line(a-70,425,l+90,425);
		line(l+70,408,l+90,390);
		line(l+70,408,l+90,425);
		line(a-50,408,a-70,390);
		line(a-50,408,a-70,425);
		int poly[8];
		for(int i=0;i<4;i++)
		{
		if(i==0)
		{
		poly[0]=50;
		poly[1]=335;
		poly[2]=50;
		poly[3]=360;
		poly[4]=l;
		poly[5]=360;
		poly[6]=l;
		poly[7]=335;
		}
		else if(i==1)
		{
		poly[0]=l+90;
		poly[1]=335;
		poly[2]=l+90;
		poly[3]=360;
		poly[4]=a-70;
		poly[5]=360;
		poly[6]=a-70;
		poly[7]=335;
		}
		else if(i==2)
		{
		poly[0]=50;
		poly[1]=395;
		poly[2]=50;
		poly[3]=420;
		poly[4]=l;
		poly[5]=420;
		poly[6]=l;
		poly[7]=395;
		}
		else
		{
		poly[0]=l+90;
		poly[1]=395;
		poly[2]=l+90;
		poly[3]=420;
		poly[4]=a-70;
		poly[5]=420;
		poly[6]=a-70;
		poly[7]=395;
		}

		setfillstyle(1,14);
		fillpoly(4,poly);
		}
		setcolor(15);
		rectangle(a-117,70,a-6,270);
		rectangle(a-111,76,a-6,264);
		setfillstyle(3,15);
		floodfill(a-113,73,15);
		floodfill(a-8,266,15);
		return l;
};


