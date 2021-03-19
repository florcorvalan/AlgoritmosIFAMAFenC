//EJERCICIO 3 1.b
#include <stdio.h>


int main(void) {

  int x,y;
 
  printf("Ingrese el valor de la variable:");
  scanf("%d %d", &x, &y);

  x = x+y;
  y= y+y;

  printf("%d %d", x, y);

  return 0;
}

/*programa      | usuario ingresa un σ0  | produce una salida σ 
1.b ejecución 1 |   2,  5                |   7,  10
1.b ejecución 2 |   3,  6                |   9,  12
1.b ejecución 3 |   7,  2                |   9,  4    */