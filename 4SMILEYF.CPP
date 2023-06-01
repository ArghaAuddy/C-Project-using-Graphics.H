#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
rectangle(0,0,600,390);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(230,150,"SMILEY FACES");
outtextxy(290,200,"BY");
outtextxy(230,250,"ARGHA AUDDY");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setlinestyle(SOLID_LINE,0,3);
//1 ST SMILEY FACE
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(100,150,60);
floodfill(101,151,YELLOW);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(80,130,3);
floodfill(81,131,BLACK);
circle(120,130,3);
floodfill(121,131,BLACK);
ellipse(100,150,180,0,40,35);
//2 nd smiley face
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
circle(500,150,60);
floodfill(501,151,GREEN);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(480,130,3);
floodfill(481,131,BLACK);
circle(520,130,3);
floodfill(521,131,BLACK);
ellipse(500,180,0,180,30,20);
//3 rd smiley face
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(100,300,60);
floodfill(101,301,YELLOW);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(80,280,3);
floodfill(81,281,BLACK);
circle(120,280,3);
floodfill(121,281,BLACK);
line(70,320,130,320);
//4 th smiley face
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(500,300,60);
floodfill(501,301,YELLOW);
setcolor(BLACK);
ellipse(475,280,180,0,10,10);
ellipse(525,280,180,0,10,10);
ellipse(500,300,180,0,40,35);
//clean up
getch();
closegraph();
return 0;
}