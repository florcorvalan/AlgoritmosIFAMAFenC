#include <stdio.h>
#include <assert.h>

int valorAbsoluto (int x){
	if (x>=0){
		return x;
	}
	else {
		return -x;
	}
}
	
int pedirEntero (void){
	int n;
	printf("Ingrese el numero:\n");
	scanf ("%d", &n);
	return n;
}

int main (void){
    int num;
    num = pedirEntero();
    
    int absoluto = valorAbsoluto(num);
    assert(absoluto==num || absoluto==num*(-1) && absoluto>=0);
    
    printf ("El valor absoluto de %d es %d", num, absoluto);
    return 0;
}