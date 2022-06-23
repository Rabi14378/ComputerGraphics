#include<graphics.h>

void MCD(int x1,int y1, int r,int color){
  float p,x,y;
  x=0;
  y=r;
  p=1-r;
  while(x<=y){
    x=x+1;
    if(p<0)
      p=p+2*x+3;
    else{
      y=y-1;
      p=p+2*x-2*y+5;
    }
    putpixel(x+x1,y+y1,1);
    putpixel(-x+x1,-y+y1,2);
    putpixel(-x+x1,y+y1,3);
    putpixel(x+x1,-y+y1,4);
    putpixel(y+x1,x+y1,5);
    putpixel(-y+x1,-x+y1,6);
    putpixel(y+x1,-x+y1,7);
    putpixel(-y+x1,x+y1,8);
    delay(10);
  }
}

int main(){
  int gd=DETECT, gm;
  initgraph(&gd, &gm,(char*)"");
  
  MCD(200,200,100,RED);
  
  getch();
  closegraph();
  return 0;
}