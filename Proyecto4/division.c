#include <stdio.h>
#include <assert.h>

int pedirEntero(void){
  int n;
  printf("Ingrese un entero:\n");
  scanf("%d", &n);
  
  return n;
}

struct div_t {
int cociente;
int resto;
};


struct div_t division(int x, int y){
  struct div_t div;
  div.cociente=x/y;
  div.resto = x%y;
  return div;
}


int main(void) {
  struct div_t p0;
  
  int x = pedirEntero();
  int y=pedirEntero();

  if (y==0)
  printf("Error, el divisor es 0");
  else{
  p0=division(x,  y);
  printf("El cociente es %d y el resto es %d\n", p0.cociente, p0.resto);}
  


  return 0;
}
