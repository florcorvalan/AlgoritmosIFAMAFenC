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

struct comp_t {
int menores;
int iguales;
int mayores;
};


struct comp_t cuantos(int a[], int tam, int elem){
  struct comp_t cont;
  cont.menores= 0;
  cont.iguales= 0;
  cont.mayores =0;

  int i=0;

  while (i<tam){
    if (a[i]<elem){
      cont.menores +=1;
    }
    if (a[i]==elem){
      cont.iguales+=1;
    }
    else if (a[i]>elem){
      cont.mayores+=1;
    }
    i=i+1;
  }

  return cont;
}


int main(void) {
  struct comp_t conteo;
  
  printf("Ingrese el tamaño del arreglo\n");
  int N = pedirEntero();
  (assert(N>0));
  int elem =pedirEntero();
  int array[TAM];
  pedirArreglo(array, N);


  conteo= cuantos(array, N, elem);
  printf("Los nuemeros menores al entero son %d,los iguales son %d y los mayores son %d\n", conteo.menores, conteo.iguales, conteo.mayores);
  


  return 0;
}

