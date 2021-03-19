//ejercicio 4a
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void) {

  int x,y;
 
  printf("Ingrese el valor de la variable:");
  scanf("%d %d", &x, &y);
  
 if (x >= y)
  x=0;
  if (x<= y)
  x=2;
 
  printf("%d %d", x, y);

  return 0;
}