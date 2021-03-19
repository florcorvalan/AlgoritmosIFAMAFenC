#include <stdio.h>
#include <assert.h>

int main()
{
  int x,y;

  printf("Ingrese x, y: "), scanf("%d %d",&x,&y);

  int X=x;
  int Y=y;

  x=x+1;
  y=X+y;
   

  printf("Ingrese x: %d y: %d\n",x,y);
  assert(x==X+1 && y==X+Y);
  
  return 0;
}