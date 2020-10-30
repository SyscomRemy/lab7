#include <stdlib.h>
#include <stdio.h>
#include "min.h"

int main (void)

{

 int mini =100;
 int tab[5]= {2,5,7,2,9}; min(tab,5,&mini);
 printf("La valeur min vaut : %d", mini);

return 0;

}
