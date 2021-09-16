/*
This program is created by © shivanshusurya192@gmail.com
It is a GAME of TIC-TAC-TOE that you can play with your friend.
The instructions will be given when you run the program.
Single player version is in progress....
*/

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>

void main()
{
char a,b,name[20],name2[20];
char ent[500]="Enter RED Player's Name :";
char ent1[500]="Enter GREEN Player's Name :";
int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;
for(int v=0;v<strlen(ent);v++)
{
cout<<ent[v];
delay(50);
}
gets(name);
for(v=0;v<strlen(ent1);v++)
{
cout<<ent1[v];
delay(50);
}
gets(name2);
clrscr();
char bst[100]="\t\t\t*  !  Best of Luck Players  !  *" ;
for(v=0;v<strlen(bst);v++)
{
cout<<bst[v];
delay(50);
}
cout<<"\n\n\t\t\t\t\b\bPRESS ANY KEY TO CONTINUE\r";
char go=getch();
int gd=DETECT,gm,k=0,tie=0;
initgraph(&gd,&gm,"c://TC//bgi");
cout<<"\t\t\t    WELCOME TO TIC-TAC-TOE GAME\n\n";

for(int j=0;j<9;j++)
{
tie++;
up:
setcolor(5);
rectangle(150,100,500,400);
rectangle(267,100,268,400);
rectangle(380,100,381,400);
rectangle(150,200,500,201);
rectangle(150,300,500,301);

if(k==0)
{

a=getch();
	if((a=='1') && (a1!=1))
	{
	if(b1!=1)
	{
	 for(int i=0;i<30;i++)
	 {
	 setcolor(RED);
	 circle(209,350,i);
	 }
	 a1=1;
	}
	else
	{
	cout<<"GREEN'S TERRITORY\r";
	delay(400);
	cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='2') && (a2!=1))
	{
	if(b2!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(324,350,i);
	}
	a2=1;
	}
	else
	{
	 cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='3') && (a3!=1))
	{
	if(b3!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(440,350,i);
	}
	a3=1;
	}
	else
	{
	 cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}

	else if((a=='4') && (a4!=1))
	{
	if(b4!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(209,250,i);
	}
	a4=1;
	}
	else
	{
	 cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='5') && (a5!=1))
	{
	if(b5!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(324,250,i);
	}
	a5=1;
	}
	else
	{
	 cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='6') && (a6!=1))
	{
	if(b6!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(440,250,i);
	}
	a6=1;
	}
	else
	{
	 cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='7') && (a7!=1))
	{
	if(b7!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(209,150,i);
	}
	a7=1;
	}
	else
	{
	 cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='8') && (a8!=1))
	{
	if(b8!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(324,150,i);
	}
	a8=1;
	}
	else
	{
	cout<<"GREEN'S TERRITORY";delay(400); cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((a=='9') && (a9!=1))
	{
	if(b9!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(RED);
	circle(440,150,i);
	}
	a9=1;
	}
	else
	{
	cout<<"GREEN'S TERRITORY";
	delay(400);
	 cout<<"\r\t\t\t\t\t\r";
	goto up;
	}
	}
	else
	{
	cout<<"\t\t\t\t  WRONG COMMAND";
	delay(200);
	cout<<"\r\t\t\t\t\t\t\t\t \r";
	goto up;
	}
      if((a1==1&&a5==1&&a9==1)||(a2==1&&a1==1&&a3==1)||(a1==1&&a4==1&&a7==1)||(a4==1&&a5==1&&a6==1)||(a5==1&&a8==1&&a2==1)||(a6==1&&a3==1&&a9==1)||(a7==1&&a8==1&&a9==1)||(a7==1&&a5==1&&a3==1))
  {
  cout<<"\t\t\t\t  RED PLAYER WON";
  break;
  }
 k=1;
 if(tie==9)
cout<<"\t\t\t\t  MATCH TIED\n";

 continue;
 }
 else
{

b=getch();
	if((b=='1') && (b1!=1))
	{
	if(a1!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(209,350,i);
	}
	b1=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);
	cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='2') && (b2!=1))
	{
	if(a2!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(324,350,i);
	}
	b2=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='3') && (b3!=1))
	{
	if(a3!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(440,350,i);
	}
	b3=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='4') && (b4!=1))
	{
	if(a4!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(209,250,i);
	}
	b4=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='5') && (b5!=1))
	{
	if(a5!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(324,250,i);
	}
	b5=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='6') && (b6!=1))
	{
	if(a6!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(440,250,i);
	}
	b6=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='7') && (b7!=1))
	{
	if(a7!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(209,150,i);
	}
	b7=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='8')&&(b8!=1))
	{
	if(a8!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(324,150,i);
	}
	b8=1;
	}
	else
	{
		cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else if((b=='9')&&(b9!=1))
	{
	if(a9!=1)
	{
	for(int i=0;i<30;i++)
	{
	setcolor(2);
	circle(440,150,i);
	}
	b9=1;
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\tRED'S TERRITORY";delay(400);cout<<"\r\t\t\t\t\t\t\t\t\t\t\t\t\t\r";
	goto up;
	}
	}
	else
	{
	cout<<"\t\t\t\t  WRONG COMMAND";
	delay(200);
	cout<<"\r\t\t\t\t\t\t\t\t \r";
	goto up;
	}
     if((b1==1&&b5==1&&b9==1)||(b2==1&&b1==1&&b3==1)||(b1==1&&b4==1&&b7==1)||(b4==1&&b5==1&&b6==1)||(b5==1&&b8==1&&b2==1)||(b6==1&&b3==1&&b9==1)||(b7==1&&b8==1&&b9==1)||(b7==1&&b5==1&&b==1))
  {
  cout<<"\r\t\t\t\t  Player GREEN Won\t\t\t\t\n";
  break;
  }
k=0;
if(tie==9)
cout<<"\t\t\t\t  MATCH TIED\n";

continue;
}
 }
// Originally created by : © shivanshusurya192@gmail.com
getch();
}
