#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//4b
int main(void) {

  int x,y,z,m;
 
  printf("Ingrese el valor de la variable:");
  scanf("%d %d %d %d", &x, &y, &z, &m); //σ0: x->5, y->4, z->8, m->0
  
 if (x < y)
  m=x;
  else if (x>=y)
  m=y;
  
  printf("\n%d %d %d %d", x, y, z, m); //σ1: x->5, y->4, z->8, m->4

  if (m<z)
  if (m>=z)
  m=z;

  printf("\n%d %d %d %d", x, y, z, m);//σ2: x->5, y->4, z->8, m->4

  return 0;
}