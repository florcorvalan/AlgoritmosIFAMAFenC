//EJERCICIO 2
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int x, y, z, b, w;
 
  printf("Ingrese los valores de las variables:");
  scanf("%d %d %d %d %d", &x, &y, &z, &b, &w);


  if (x % 4 == 0)
  printf("\nTrue");
  else
  printf("\nFalse");

  if (x + y == 0 && y - x == (-1) * z )
  printf("\nTrue");
  else
  printf("\nFalse");

  if (! b && w)
  printf("\nTrue");
  else
  printf("\nFalse");


  
  return 0;
}

/*Valores para las variables del estado: 

(x → 4, y→ -4, z→ 8, b→ 3, w→ 5) */