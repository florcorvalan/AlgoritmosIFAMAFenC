#include <stdio.h>
#include <assert.h>

int suma_hasta(int N){
  
  int suma=(N*(N+1))/2;

  return suma;
}

int pedirEntero(void){
  int n;
  printf("Ingrese un entero:\n");
  scanf("%d", &n);
  
  return n;
}

int main(){
  int N = pedirEntero();
  int sum;

  if (N<0)
  printf("Error, entero negativo");
  else {
  sum=suma_hasta(N);
  printf( "El suma es : %d\n",sum);
  }

  
  return 0;
}