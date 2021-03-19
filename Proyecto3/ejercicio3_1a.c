//EJERCICIO 3
//1.a
#include <stdio.h>

int main(void) {

  int x;
 
  printf("Ingrese el valor de la variable:");
  scanf("%d", &x);

  x = 5;

  printf("%d", x);

  return 0;
}

/*programa      | usuario ingresa un σ0  | produce una salida σ 
1.a ejecución 1 |    1                   |   5
1.a ejecución 2 |    3                   |   5
1.a ejecución 3 |    8                   |   5      */