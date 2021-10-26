#include <iostream>
#include <stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;

class combine
{
int x1, y1, x2, y2,color;
float dx, dy, p, x, y ;
public:
void line(float a, float b, float c, float d)
{
int gd = DETECT, gm;
 initgraph(&gd, &gm, NULL);
int g=getmaxx();

x1 = a;
y1 = b;
x2 = c;
y2 = d;
float xinc, yinc, s, x, y, dx, dy;

dx = x2 - x1;
dy = y2 - y1;
x = x1;
y = y1;
putpixel(x, y, 1);
if (dx > dy)
s = dx;
else
s = dy;
xinc = dx / s;
yinc = dy / s;
for (int i = 1; i <= s; i++)
{
x = x + xinc;
y = y + yinc;
x1 = (int)x + 0.5;
y1 = (int)y + 0.5;
putpixel(x1, y1, 1);
}
getch();
closegraph();
}
void line(int ,int ,int ,int);
};
void combine::line(int a, int b, int c, int d)
{int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);
x1 = a;
y1 = b;
x2 = c;
y2 = d;
dx=abs(x2-x1);
        dy=abs(y2-y1);
	float e=2*dy-dx; 
	int i=1;
	int x=x1;
	 y=y1; 
        do
 	{
    		if(e>=0)
    		{	
      			x=x+1;
			e=e-2*dy;
		}
	else
	{y=y+1;	
        x=x+1;
        e=e+2*(dy-dx);
        putpixel(x,y,GREEN);
      	i++;
      	}
    	}while(i<=dx);
    	getch();
closegraph();
    	}
int main()
{
combine c; 
int n,x1,x2,y2,y1;
char ans;
float x3,x4,y3,y4;
cout << "\n*****Menu*****";
cout << "\n1.DDA Algorithm";
cout << "\n2.Bresenhan's Line Algorithm";
cout << "\n3.Exit";
cout << "\nEnter your choice\n";
cin >> n;

switch (n)
{
case 1:
{cout << "\nEnter x1 and y1 coordinates";
cin >> x3 >> y3;
cout << "\nEnter x2 and y2 coordinates";
cin >> x4 >> y4;
c. line( x3,  y3,  x4,  y4);

break;
}
case 2:
{
cout << "\nEnter x1 and y1 coordinates";
cin >> x1 >> y1;
cout << "\nEnter x2 and y2 coordinates";
cin >> x2 >> y2;
c. line( x1,  y1,  x2, y2);
break;
}
case 3:
exit(0);
default:
cout << "\nInvalid Choice";
}
return 0;
}

