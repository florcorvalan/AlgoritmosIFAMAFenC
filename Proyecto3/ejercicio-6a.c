//6a
#include <stdio.h>

int pedirEntero(void){
  int x;
  scanf("%d", &x);

  return x;
}

void imprimirEntero(int x){
  printf("\nEl entero es: %d", x);
}

int main(void) {
  imprimirEntero(pedirEntero());


  return 0;
}