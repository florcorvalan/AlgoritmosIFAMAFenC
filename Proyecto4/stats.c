#include <stdio.h>
#define TAM 4

struct datos_t {
	float maximo;
	float minimo;
	float promedio;
};

void imprimeTerna(struct datos_t t){
  printf("(%f,%f,%f)\n", t.maximo, t.minimo, t.promedio);
}

void pedirArreglo(float a[], int tam){
	int i;

	i=0;
	while (i<tam) {
		printf("ingrese el elemento %d del arreglo:\n",i);
		scanf("%f", &a[i]);
		i=i+1;
	}
}


struct datos_t stats (float a[], int tam){
	int i;
	float suma, max, min, prom;

	i=1;
	max = a[0];
	min = a[0];
	suma = a[0];
	while (i<tam) {
		suma = suma + a[i];
		if (a[i]>=max) {
			max = a[i];}
		if (a[i]<=min) {
			min = a[i];
			}
			i=i+1;
	}
	prom=suma/tam;
	struct datos_t terna;
	terna.maximo = max;	
	terna.minimo = min;
	terna.promedio = prom;
	return terna;
}

int main(void)
{
	float a[TAM];
	
	pedirArreglo(a, TAM);
	printf("Los valores maximo, minimo y promedio se presentan respectivamente en la siguiente terna\n");
	imprimeTerna(stats(a, TAM));
	return 0;
}

#include <stdio.h>
#include <assert.h>

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


struct sum_t {
    int suma_pares;
    int suma_impares;
};


struct sum_t suma_parimpar(int array[], int tam) {
  struct sum_t suma;
  int i=0;
	int suma1 =0;
  int suma2=0;
	while (i<tam) {
    if ((array[i]%2)==0){
      suma1 = suma1 + array[i];
    }
		else if ((array[i]%2)!=0) {
      suma2 = suma2 +array[i];
      }
    i=i+1;
	}

  suma.suma_pares=suma1;
  suma.suma_impares= suma2;

  return suma;


}



int main(void) {
  int tam, array[1000];
  tam=4;
  struct sum_t sumas;
  
  pedirArreglo(array, tam);
  

  sumas=suma_parimpar(array, tam);

  printf("sumatoria pares:%d sumatoria impares: %d\n", sumas.suma_pares, sumas.suma_impares);
  


  return 0;
}
