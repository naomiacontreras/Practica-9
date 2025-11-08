#include <stdio.h>

int main()

{

 char palabra[20];

 int i=0;

 printf("Ingrese una palabra: ");

 scanf("%s", palabra); /* Se omite & porque el propio nombre del arreglo de 

 tipo cadena apunta, es decir, es equivalente a la dirección de comienzo del 

 propio arreglo*/

 printf("La palabra ingresada es: 
   {

 printf("%c\n", palabra[i]);

 }

 return 0;

}
