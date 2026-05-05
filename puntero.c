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
char *ptr;
ptr= &letra;
c = *ptr;

printf("%p %c \n", ptr, c);
float decimal = 3.14, dec;
float *ptrf;
ptrf= &decimal;
dec = *ptrf;

printf("%p %f", ptrf, dec);
return 0;

}

