//EJERCICIO 3 1.c
#include <stdio.h>
int main(void) {

  int x,y;
 
  printf("Ingrese el valor de la variables x e y:");
  scanf("%d %d", &x, &y);

  y = y+y;
  x= x+y;

  printf("%d %d", y, x);

  return 0;
}

/*programa      | usuario ingresa un σ0  | produce una salida σ 
1.c ejecución 1 |   2,  5                |   10, 12
1.c ejecución 2 |   4,  2                |   4,  8
1.c ejecución 3 |   3,  9                |   18,  21            */