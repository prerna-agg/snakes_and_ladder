#include<dos.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void dice_design(int,int);
void check_snake_ladder(int&);
void generate_circle(int&);
int check_dice(int,int,int&);
void design();
void main()
{
	int player1,player2;
	player1=0;
	player2=0;
	char str[3];
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	design();
	setcolor(6);
	circle(500,140,5);
	setcolor(5);
	circle(500,160,5);
	setcolor(3);
	outtextxy(400,100,"click to start the game.");
	getch();
	for(;player1<100&&player2<100;)
	{
		cleardevice();
		design();//design of the board
		setbkcolor(11);
//player1 started
		setcolor(6);
		int dice=0;
		int dice3;
		dice3=rand()%6+1;
		dice_design(dice3,1);
		player1=check_dice(dice3,1,player1);//to check for 6
		rectangle(480,50,440,100);//sprintf(str,"%d",dice);outtextxy(460,70,str);
		//dice_design(dice,1);
		check_snake_ladder(player1);//to check for snake and ladder
		generate_circle(player1);//to generate the circles
		getch();
//player2 started
		setcolor(5);
		dice=0;
		dice3;
		dice3=rand()%6+1;
		player2=check_dice(dice3,2,player2);
		rectangle(480,120,440,170);
		dice_design(dice,2);
		check_snake_ladder(player2);
		generate_circle(player2);
		getch();
	}
	setbkcolor(6);
	if(player1==100)
	{
		cleardevice();
		cout<<"player1 is the winner";
	}
	else
	{
		cleardevice();
		cout<<"player2 is the winner";
	}
	getch();
}
void dice_design(int d,int i)
{
	if(i==1)
	{
		if(d==1)
		{
			circle(460,75,5);
		}
		if(d==2)
		{
			circle(450,75,5);
			circle(470,75,5);
		}
		if(d==3)
		{
			circle(460,65,5);
			circle(450,75,5);
			circle(470,75,5);
		}
		 if(d==4)
		{
			circle(450,65,5);
			circle(470,65,5);
			circle(450,85,5);
			circle(470,85,5);
		}
		if(d==5)
		{
			circle(450,65,5);
			circle(470,65,5);
			circle(450,85,5);
			circle(470,85,5);
			circle(460,75,5);
		}
		if(d==6)
		{
			 circle(450,65,5);
			 circle(470,65,5);
			 circle(450,85,5);
			 circle(470,85,5);
			 circle(450,75,5);
			 circle(470,75,5);
		}
	}
	else if(i==2)
	{
		if(d==1)
		{
			circle(460,150,5);
		}
		if(d==2)
		{
			circle(450,150,5);
			circle(470,150,5);
		}
		if(d==3)
		{
			circle(460,140,5);
			circle(450,150,5);
			circle(470,150,5);
		}
		if(d==4)
		{
			circle(450,140,5);
			circle(470,140,5);
			circle(450,160,5);
			circle(470,160,5);
		}
		if(d==5)
		{
			circle(450,140,5);
			circle(470,140,5);
			circle(450,160,5);
			circle(470,160,5);
			circle(460,150,5);
		}
		if(d==6)
		{
			circle(450,140,5);
			circle(470,140,5);
			circle(450,160,5);
			circle(470,160,5);
			circle(450,150,5);
			circle(470,150,5);
		}

	}
}
void design()
{
//setbkcolor(6);
	setbkcolor(11);
	setcolor(1);
	setlinestyle(SOLID_LINE,0,3);
	int x1=10,x2=10,y1=10,y2=410;
	for(x1=10;x1<=410;x1+=40)
	{
		line(x1,y1,x2,y2);
		x2+=40;
	}
	x1=10;x2=410;y1=10;y2=10;
	for(y1=10;y1<=410;y1+=40)
	{
		line(x1,y1,x2,y2);
		y2+=40;
	}
	setcolor(1);
	int i=1,j;
	char str[3];
	for(y1=380;y1>=60;y1=y1-80)
	{
		x1=20;
		for(j=1;j<=10;j++)
		{
			sprintf(str,"%d",i);
			outtextxy(x1,y1,str);
			x1=x1+40;
			i=i+1;
		}
		i=i+10;
	}
	i=11;
	for(y1=340;y1>=20;y1=y1-80)
	{
		x1=380;
		for(j=1;j<=10;j++)
		{
			sprintf(str,"%d",i);
			outtextxy(x1,y1,str);
			x1=x1-40;
			i=i+1;
		}
		i=i+10;
	}
	/*outtextxy(20,20,"100");
	outtextxy(380,380,"10");*/
	setlinestyle(SOLID_LINE,0,3);
	setcolor(3);
	line(140,220,260,340);
	line(160,220,280,340);
	line(170,250,190,250);
	line(210,290,230,290);
	line(250,330,270,330);
	setcolor(10);
	line(300,20,220,100);
	line(320,20,240,100);
	line(290,50,270,50);
	line(250,90,230,90);
	setcolor(12);
	line(60,60,100,100);
	line(80,60,120,100);
	line(90,90,110,90);
	line(70,70,90,70);
	setcolor(14);
	setlinestyle(DOTTED_LINE,0,3);
	line(100,20,100,60);
	line(100,60,140,100);
	line(140,100,140,140);
	line(140,140,180,180);
	line(180,180,180,220);
	line(180,220,220,260);
	line(220,260,180,300);
	line(180,300,220,340);
	line(220,340,260,380);
	setcolor(4);
	line(380,140,340,180);
	line(340,180,380,220);
	line(380,220,340,260);
	line(340,260,340,300);
	line(340,300,300,340);
	setcolor(7);
	line(60,220,100,260);
	line(100,260,60,300);
	line(60,300,100,340);
	//setbkcolor(6);
	//getch();
}
void check_snake_ladder(int &player)//checks that snake or ladder has come
{
	int quo,rem;
	if(player==42)
	{
		quo=player/10;
		rem=player%10;
		circle(20+((rem-1)*40),380-(quo*40),5);
		//delay(100);
		player=18;
	}
	if(player==14)
	{
		quo=player/10;
		rem=player%10;
		circle(20+((10-rem)*40),380-(quo*40),5);
		//delay(100);
		player=44;
	}
	if(player==78)
	{
		quo=player/10;
		rem=player%10;
		circle(20+((10-rem)*40),380-(quo*40),5);
		//delay(100);
		player=82;
	}
	if(player==75)
	{
		quo=player/10;
		rem=player%10;
		circle(20+((10-rem)*40),380-(quo*40),5);
		//delay(100);
		player=93;
	}
	if(player==70)
	{
		quo=player/10;
		rem=player%10;
		circle(380,380-((quo-1)*40),5);
		//delay(100);
		player=13;
	}
	if(player==98)
	{
		quo=player/10;
		rem=player%10;
		circle(20+((10-rem)*40),380-(quo*40),5);
		delay(100);
		player=7;
	}
}
int check_dice(int dice,int i,int &player2)//checks the value of dice is 6
{
      int dice3;
      dice3=dice;
     int dice2=0,dice1=0;
      dice_design(dice,i);
      if(dice==6)
      {
		dice1=rand()%6+1;
		dice_design(dice1,i);
		if(dice1==6)
		{
			dice2=rand()%6+1;
			dice_design(dice2,i);
				if(dice2==6)
				{
					dice=0;
				}
				else
				{
					dice=dice+dice1+dice2;
				}
			}
			else
			{
				dice=dice+dice1;
			}
		}
		player2=player2+dice;
		if(player2>100)
		{
			player2=player2-dice2;
			if(player2>100)
			{
				player2=player2-dice1;
				if(player2>100)
				{
					player2=player2-dice3;
				}
			}
		}
		return player2;
}
void generate_circle(int &player2)//generates players circle
{
int quo,rem,l,m;
    quo=player2/10;
	rem=player2%10;
	if(quo==0)
	{
		l=20+((rem-1)*40);
		m=380;
		circle(l,m,5);
	}
	else if(quo%2==0&&player2%10!=0)
	{
		circle(20+((rem-1)*40),380-(quo*40),5);
	}
	else if(quo%2!=0&&player2%10!=0)
	{
		circle(20+((10-rem)*40),380-(quo*40),5);
	}
	else if(player2==10||player2==30||player2==50||player2==70||player2==90)
	{
		circle(380,380-((quo-1)*40),5);
	}
	else if(player2==20||player2==40||player2==60||player2==80||player2==100)
	{
		circle(20,380-((quo-1)*40),5);
	}
}


