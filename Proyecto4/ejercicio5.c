#include <stdio.h>
#include <assert.h>

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

int main(void) {

  int N, array[1000];

  printf("Ingrese el tamaño del arreglo\n");
  scanf("%d", &N);

  assert(N>0 && N<=1000);

  pedirArreglo(array, N);
  imprimeArreglo(array, N);
  
  return 0;
}
