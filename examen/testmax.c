#include <stdlib.h>
#include <stdio.h>
#include "max.h"

int main (void)
{

 int maxi =0;
 int tab[5]= {2,5,7,2,9}; max(tab,5,&maxi);
 printf("La valeur max vaut : %d", maxi);

return 0;
}
