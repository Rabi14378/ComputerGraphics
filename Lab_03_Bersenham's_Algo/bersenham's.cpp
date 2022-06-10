#include<graphics.h>
#include<cmath>

void BLA(float,float,float,float,int);

int main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,(char*)"");
  BLA(106,101,406,412,1);
  BLA(406,412,106,101,2);
  BLA(106,412,406,101,3);
  BLA(406,101,106,412,4);
  getch();
  closegraph();
  return 0;
}

void BLA(float x1,float y1,float x2,float y2,int color){
  float x,y,dx,dy,x_inc,y_inc,p;
  dx=fabs(x2-x1);
  dy=fabs(y2-y1);
  if(x2>x1) x_inc=1;
  else x_inc=-1;
  if(y2>y1) y_inc=1;
  else y_inc=-1;
  x=x1;
  y=y1;
  putpixel(x,y,color);
  if(dx>dy){
    p=2*dy-dx;
    for(int i=0;i<dx;i++){
      if(p<0){
        x+=x_inc;
        p+=2*dy;
      }
      else{
        x+=x_inc;
        y+=y_inc;
        p+=2*(dy-dx);
      }
      putpixel(x,y,color);
      delay(10);
    }
  }
  else{
    p=2*dx-dy;
    for(int i=0;i<dy;i++){
      if(p<0){
        y+=y_inc;
        p+=2*dx;
      }
      else{
        x+=x_inc;
        y+=y_inc;
        p+=2*(dx-dy);
      }
      putpixel(x,y,color);
      delay(10);
    }
  }
  
}