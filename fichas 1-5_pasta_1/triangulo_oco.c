/* 

*******  -->N passado como argumento
 *   *
  * *
   *

 */
#include <stdio.h>
void linha(int n){
for(int i=0; i<n ;++i)
 putchar('*');
}

int triangulo_inv(int sup){
linha(sup);
putchar('\n');
int cnt=0;
int cnt_right=1, cnt_midlle=sup-(2*cnt_right+2);
for(int i=0; i<sup/2; ++i,++cnt_right,cnt_midlle=sup-(2*cnt_right+2)){
 for(int j=0; j<cnt_right;++j)
  putchar(' ');
 putchar('*'); ++cnt;
 for(int j=0; j<cnt_midlle;++j)
  putchar(' ');
 if(cnt_midlle>=0){
  putchar('*');++cnt;
  }
  putchar('\n');
}
return cnt+sup;
}

int main(){
printf("%d",triangulo_inv(21));

return 0;
}