#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int pedirEntero(void){
  int n;
  printf("Ingrese un entero:\n");
  scanf("%d", &n);
  
  return n;
}

 
int main () {
  int minimo;

  int x = pedirEntero();
  int y = pedirEntero();

  if (x<=y)
  minimo=x;
  else 
  minimo=y;

  assert(minimo<=x && minimo<=y);
  assert(minimo==x || minimo==y);

  printf( "El minimo es : %d\n", minimo );
  return 0;
}
 
