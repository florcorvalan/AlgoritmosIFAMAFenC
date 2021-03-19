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

void intercambiar(int a[], int tam, int i, int j){
  int z;
  z= a[i];
  a[i]=a[j];
  a[j]=z;
}


int main(void) {
 
int N, array[1000], pos1, pos2;
	printf("Ingrese el tamaño del arreglo\n"); scanf("%d",&N);
	assert (N > 0);

	pedirArreglo (array, N);

	printf ("Ingrese las posiciones que desea intercambiar: \n"); 
    scanf("%d", &pos1); 
    scanf("%d", &pos2);
	assert (0<= pos1 && 0 <= pos2 && pos1 < N && pos2 < N);
  
	intercambiar(array, N, pos1, pos2);

	printf ("Su nuevo vector es:\n");
	imprimeArreglo(array, N);
    
    return 0;
}
