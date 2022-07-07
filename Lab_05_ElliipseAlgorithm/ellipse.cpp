#include<graphics.h>
#include<iostream>
#include<cmath>

void drawEllipse(int, int, int, int );

int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,(char*)"");

  drawEllipse(200,200,50,100);

  getch();
  closegraph();
  return 0;
}


void drawEllipse(int x1,int y1,int rx,int ry){
  float p,x,y;
  int rx2=rx*rx;
  int ry2=ry*ry;
  x=0;
  y=ry;
  p=ry2-rx2*ry+(1/4)*rx2;
  while(2*ry2*x<2*rx2*y){
    x=x+1;
    if(p<0)
      p=p+2*ry2*x+ry2;
    else{
      y=y-1;
      p=p+2*ry2*x-2*rx2*y+ry2;
    }
    putpixel(x+x1,y+y1,1);
    putpixel(-x+x1,-y+y1,2);
    putpixel(-x+x1,y+y1,3);
    putpixel(x+x1,-y+y1,4);
  }

  p=ry2*pow(x+1/2,2)+rx2*pow(y-1,2)-rx2*ry2;
  while(y>=0){
    y=y-1;
    if(p>0)
      p=p-2*rx2*y+rx2;
    else{
      x=x+1;
      p=p+2*ry2*x-2*rx2*y+rx2;
    }
    putpixel(x+x1,y+y1,1);
    putpixel(-x+x1,-y+y1,2);
    putpixel(-x+x1,y+y1,3);
    putpixel(x+x1,-y+y1,4);
  }

}