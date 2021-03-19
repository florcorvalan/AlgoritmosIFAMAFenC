#include <stdio.h>
#include <assert.h>
#define TAM 1000 

int pedirEntero(void){
  int n;
  printf("Ingrese un entero:\n");
  scanf("%d", &n);
  
  return n;
}


void pedirArreglo(int a[], int n_max){
  int i = 0;
  int elem;

  while (i<n_max){
    printf("Ingrese el elemento en la posicion %d\n",i);
    scanf("%d", &elem);
    a[i]=elem;
    i=i+1;
  }
}

void imprimeArreglo(int a[], int n_max){
  int i=0;
  while (i<n_max){
    printf("%d ",a[i]);
    i+=1;
  }
  printf("\n");
}

int sumatoria(int a[], int n_max){
  int i =0;
  int suma=0;
  while (i<n_max){
  suma=suma+a[i];
  i+=1;}

  return suma;

}

int main(void) {
  int suma;

  int array[TAM];
  int N = pedirEntero();

  pedirArreglo(array, N);

  suma=sumatoria(array, N);

  printf("Suma=%d\n",suma);
  

  return 0;
}
