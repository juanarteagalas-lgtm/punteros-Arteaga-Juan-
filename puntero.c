#include <stdio.h>


int main (int argc, char const * argv[])
{
int num = 15;
int a ;
int *x;


x= &num; //x se le asigna direccion de numm,m,m,,,,
a = *x;   // a se le asiga el valor de x

printf("%p %d \n", x, a);



char letra = 'a', c;
char *ptr; // a ptr se le asiga la direccion de letra 
ptr= &letra;  // a "c" se le asigna el valor de la letra a travez del puntero ptr
c = *ptr; // se imprime la direccion de letra y el valor de c 
 
printf("%p %c \n", ptr, c);
float decimal = 3.14, dec; 
float *ptrf;  
ptrf= &decimal; //  a ptrf se asigna la direccion de decimal 
dec = *ptrf; //a dec dse le asigna el valor de decimal a traves del puntero ptrf

printf("%p %f", ptrf, dec); //se imprime la direccion de decimal  y el valor de ptrf
return 0;

}


