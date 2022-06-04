#include<graphics.h>
#include<iostream>
#include<cmath>

void DDA(float,float,float,float,int);

int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,(char*)"");
  DDA(106,101,406,412,1);
  DDA(406,412,106,101,2);
  DDA(106,412,406,101,3);
  DDA(406,101,106,412,4);
  getch();
  closegraph();
  return 0;
}

void DDA(float x1,float y1,float x2,float y2,int color){
  float steps,dx,dy,x,y,i,x_inc,y_inc;
  dx=x2-x1;
  dy=y2-y1;
  if(abs(dx)>abs(dy))
    steps=abs(dx);
  else
    steps=abs(dy);
  x_inc=dx/steps;
  y_inc=dy/steps;
  x=x1;
  y=y1;
  i=0; 
  do{
    putpixel(x,y,color);
    x+=x_inc;
    y+=y_inc;
    i++;
    delay(10);
  }while(i<=steps);
  
}