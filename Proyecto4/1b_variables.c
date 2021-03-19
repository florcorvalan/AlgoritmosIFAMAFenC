#include <stdio.h>
#include <assert.h>

int main()
{
  int x,y,z;

  printf("Ingrese x, y: "), scanf("%d %d",&x,&y);

  int X=x;
  int Y=y;


  z=x;
  x=y;
  y=z; 

  printf("Ingrese x: %d y: %d z: %d\n",x,y,z);
  assert(x==Y && y==X);
  
  return 0;
}