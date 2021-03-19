//EJERCICIO 1
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int x, y, z;
  printf("Ingrese los valores de las variables:");
  scanf("%d %d %d", &x, &y, &z);
  
  printf("\nSuma: %d", x+y+1);
  printf("\nOperacion 1: %d", z * z + y * 45 - 15 * x);
  printf("\nOperacion 2: %d", y - 2 == (x * 3 + 1) % 5 );
  printf("\nOperacion 3: %d", y / 2 * x);
  printf("\nOperacion 4: %d", y < x *z);
  
  return 0;
}


/*expresion     | (x → 7, y → 3, z → 5)  | (x → 1, y → 10, z → 8) 
x+y+1           |    11                  |   12
z*z+y*45-15*x   |    55                  |   499
y-2==(x*3+1)%5  |    0                   |   0
y / 2 * x       |    7                   |   5
y < x *z        |    1                   |   0
 

En la última expresión el tipo que tiene el resultado en lenguaje
“C” es entero. Funcionando en este caso como sinónimo del tipo bool. */



