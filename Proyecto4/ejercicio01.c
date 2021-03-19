#include <stdio.h>
#include <assert.h>

int pedirEntero(void){
  int n;
  printf("Ingrese un entero:\n");
  scanf("%d", &n);
  assert(n>0);
  
  return n;
}

void holaHasta(int n){
  int i = 1;
  
  while (i<=n){
   
    printf("Hola\n");
    i=i+1;

  }
}

int main(void) {
  int x = pedirEntero();
  holaHasta(x);
  
  return 0;
}