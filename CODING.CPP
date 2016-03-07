int coding(int m,int **l1,int **l2,int **l3,int **l4,int l)
{       int a=getmaxx();
	int ans,j,ans1,poly[8];
	gotoxy(41,9);
	cin>>ans;
	switch(m)
	{
	case 2:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			/*if(i==4)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}*/
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,0);
				fillpoly(4,poly);

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==2)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 3:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 4:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 5:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 6:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 7:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 8:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 9:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 10:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 11:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 13:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 14:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 12:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 15:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 16:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
				**l1=1;
				for(int i=1;i<5;i++)
				{
					if(i==1)
					{
						poly[0]=50;
						poly[1]=335;
						poly[2]=50;
						poly[3]=360;
						poly[4]=l;
						poly[5]=360;
						poly[6]=l;
						poly[7]=335;
						setfillstyle(1,0);
						fillpoly(4,poly);
					}
					if(i==2)
					{
						poly[0]=l+90;
						poly[1]=335;
						poly[2]=l+90;
						poly[3]=360;
						poly[4]=a-70;
						poly[5]=360;
						poly[6]=a-70;
						poly[7]=335;
						setfillstyle(1,0);
						fillpoly(4,poly);
					}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);*/

			}
				}
			}

			if((ans==6) && (**l2==0))
			{
				**l2=1;
				settextstyle(8,0,1);
				outtextxy(50,332," 1: Amitabh Bachan() ");
				outtextxy(l+90,332," 2: Pratibha Patil()");
				outtextxy(50,392," 3: Pranav Mukherji() ");
				outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		}
		j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
				ans1=7;
				**l4=1;
				j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;					setfillstyle(1,RED);
				fillpoly(4,poly);

			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
		}
		if(ans==4)
			return 10;
		else if((ans==7)&&(**l3==0))
		{
			**l3=1;
			return 10;
		}
		else
			return 20;
		break;
	case 17:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<5;i++)
			{
			/*if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}*/
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,0);
				fillpoly(4,poly);

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);

			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==1)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 18:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<5;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
		       /*	if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}*/
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
		       /*	if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);

			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==2)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 19:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<5;i++)
			{
			/*if(i==4)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}*/
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			/*if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);

			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==1)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 20:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	case 1:
		if(ans==5 || ans==6)
		{
			if((ans==5)&&(**l1==0))
			{
			**l1=1;
			for(int i=1;i<3;i++)
			{
			if(i==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
			if(i==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,0);
				fillpoly(4,poly);
			}
		       /*	if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);   */

			}
			}

			if((ans==6) && (**l2==0))
			{
			**l2=1;
			settextstyle(8,0,1);
			outtextxy(50,332," 1: Amitabh Bachan() ");
			outtextxy(l+90,332," 2: Pratibha Patil()");
			outtextxy(50,392," 3: Pranav Mukherji() ");
			outtextxy(l+90,392," 4: Harshvardhan()  ");
			}
		  }
		 j=0;
		while(j<1)
		{
			j++;
			if((ans==8)&&(**l4==0))
			{
			 ans1=7;
			**l4=1;
			j--;
			}
			if((ans==5) || (ans==8) || (ans==6) || (ans1==8))
			{	cin>>ans;
				ans1++;
			}
			if(ans==1)
			{
				poly[0]=50;
				poly[1]=335;
				poly[2]=50;
				poly[3]=360;
				poly[4]=l;
				poly[5]=360;
				poly[6]=l;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==2)
			{
				poly[0]=l+90;
				poly[1]=335;
				poly[2]=l+90;
				poly[3]=360;
				poly[4]=a-70;
				poly[5]=360;
				poly[6]=a-70;
				poly[7]=335;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
			if(ans==3)
			{
				poly[0]=50;
				poly[1]=395;
				poly[2]=50;
				poly[3]=420;
				poly[4]=l;
				poly[5]=420;
				poly[6]=l;
				poly[7]=395;
				setfillstyle(1,GREEN);
				fillpoly(4,poly);
				break;
			}
			if(ans==4)
			{
				poly[0]=l+90;
				poly[1]=395;
				poly[2]=l+90;
				poly[3]=420;
				poly[4]=a-70;
				poly[5]=420;
				poly[6]=a-70;
				poly[7]=395;
				setfillstyle(1,RED);
				fillpoly(4,poly);
			}
		}
		if(ans==3)
		return 10;
		else if((ans==7)&&(**l3==0))
		{
		**l3=1;
		return 10;
		}
		else
		return 20;
		break;
	    }
	    }
};