#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int pedirEntero(void)
{
	int x;
	printf("Ingrese el entero: ");
	scanf("%d",&x);
	return x;
}

bool es_primo(int x){
	int i = 2;
	bool res = true;
	while (i<x && res){
		if (x%i==0)
			res = false;
		i = i+1;
	}
	return res;
}

int nesimo_primo(int N){
	int x = 2;
	int i = 1;
	while (i<N){
		x = x + 1;
		if (es_primo(x)){
			i = i + 1;
		}
	}
	return x;
}

int main(void){
	int x = pedirEntero();
	while (x<0){
		printf("Usted ingreso un
numero negativo. Ingrese un positivo\n");
		x = pedirEntero();
	}
	int primo = nesimo_primo(x);
	printf("El n-esimo primo es %d\n", primo);
	return 0;
}