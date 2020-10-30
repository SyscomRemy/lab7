#include <stdlib.h>
#include <stdio.h>
#include "variance.h"

int main (void)
{

 float var;
 int tab[5]= {2,5,7,2,9}; variance(tab,5,&var);
 printf("La valeur de la variance vaut : %f", var);

return 0;

 }

