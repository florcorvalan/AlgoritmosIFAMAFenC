#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#define TAM 1000 

int pedirEntero(void){
  int n;
  printf("Ingrese un entero:\n");
  scanf("%d", &n);
  
  return n;
}

bool existe_positivo(int a[], int tam){
  bool res = 0;
  int i=0;

  while (i<tam && !res){
    if (a[i]>=0){
      res =1;
    }
    i=i+1;
    
  }
  return res;
}

bool todos_positivos(int a[], int tam){
  bool res = true;
  int i =0;

  while (i<tam && res){
    if (a[i]<0){
      res=false;
    }
    i= i+1;
  }
  return res;
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


int main(void) {
  bool existePos, todosPos;

  int array[TAM];
  int N = pedirEntero();
  (assert(N>0));

  pedirArreglo(array, N);

  printf("Ingrese 1 si desea ejecutar todos_positivos o otro numero si desea ejecutar existe_positivo\n");

  int menu= pedirEntero();

  if (menu==1){
    todosPos= todos_positivos(array, N);
    printf("todosPos= %d\n", todosPos);
  }
  else{
    existePos = existe_positivo(array, N);
    printf("existesPos= %d\n", existePos);
  }
  
  return 0;
}
