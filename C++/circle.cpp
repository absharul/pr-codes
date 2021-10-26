#include<graphics.h>


int main(){
    int gd = DETECT, gm;

    initgraph(&gd,&gm, "C:\TURBOC3\BGI");

    circle(300,300,150);

    getch();

    closegraph();

}