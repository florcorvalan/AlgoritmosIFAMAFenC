//6b
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int pedirEntero(void){
  int x;
  scanf("%d", &x);

  return x;
}

void imprimirEntero(int x){
  printf("\nEl entero es: %d", x);
}


int main(void) {

  int x,y,z,m;
 
  printf("Ingrese el valor de la variable x:");
  x=pedirEntero();
  printf("Ingrese el valor de la variable y:");
  y=pedirEntero();
  printf("Ingrese el valor de la variable z:");
  z=pedirEntero();
  printf("Ingrese el valor de la variable m:");
  m=pedirEntero();

  imprimirEntero(x);
  imprimirEntero(y);
  imprimirEntero(z);
  imprimirEntero(m);
  
 if (x < y)
  m=x;
  else if (x>=y)
  m=y;
  
  imprimirEntero(x);
  imprimirEntero(y);
  imprimirEntero(z);
  imprimirEntero(m);


  if (m<z)
  if (m>=z)
  m=z;

  imprimirEntero(x);
  imprimirEntero(y);
  imprimirEntero(z);
  imprimirEntero(m);

  return 0;
}

/*Con las funciones para imprimir y pedir enteros se podrian reescribir la mayoria de las funciones del proyecto*/