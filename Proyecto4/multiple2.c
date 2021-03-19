#include <stdio.h>
#include <assert.h>


int main()
{
  int x,y,z;

  printf("Ingrese x, y, z: "), scanf("%d %d %d",&x,&y, &z);

  int X=x;
  int Y=y;
  int Z=z;


  y=y+x+z;
  z=Y+x;
  x=Y; 

  printf("Ingrese x: %d y: %d z: %d\n",x,y,z);
  assert(x==Y && y==Y+X+Z && Z==Y+X);
  
  return 0;
}