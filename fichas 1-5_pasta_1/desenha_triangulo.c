/*  
Altura passada como argumento
*
**
***
****
*****
*/

#include <stdio.h>

void triangulo(int altura){
for(int i=0; i<altura; ++i){
 for(int j=0; j<i+1; ++j)
  putchar('*');
 putchar('\n');
}
}



int main(){
triangulo(5);
return 0;
}