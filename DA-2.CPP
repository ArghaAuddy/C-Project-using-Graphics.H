#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(LIGHTBLUE);
for( int i=0;i<550;i++)
{
//plane body
setcolor(WHITE);
rectangle(150+i,100,170+i,130);
ellipse(150+i,115,90,270,127,15);
ellipse(116+i,104,10,170,24,12);
//plane wing
setcolor(YELLOW);
line(120+i,120,70+i,166);
line(90+i,120,60+i,160);
ellipse(77+i,160,180,250,16,8);
line(120+i,93,89+i,62);
line(96+i,101,76+i,62);
line(76+i,63,89+i,63);
//plane tail
setcolor(YELLOW);
line(30+i,80,50+i,110);
line(10+i,85,30+i,120);
line(10+i,85,30+i,80);
setcolor(WHITE);
rectangle(170+i,110,175+i,120);
setcolor(RED);
settextstyle(7,0,2);
outtextxy(200,400,":- BY ARGHA AUDDY AND BHAVYA");
if(i%2==0)
{
setcolor(11);
ellipse(178+i,94,0,360,3,18);
}
else
{
setcolor(11);
ellipse(178+i,136,0,360,3,18);
}
delay(40);
cleardevice();
}
getch();
closegraph();
}
