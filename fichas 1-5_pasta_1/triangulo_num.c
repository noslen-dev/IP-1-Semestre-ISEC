/* 
  12321
   121
    1
*/

#include <stdio.h>
/*
void num_tri(int n){
int curr=n,espacos=1;
for(int i=1; i<=n ; ++i,--curr,++espacos){         
 for(int j=1;j<=curr;++j)
  printf("%d",j);
 for(int j=curr-1; j>=1; --j)
  printf("%d",j);
 putchar('\n');
 for(int i=1; i<=espacos;++i)
  putchar(' ');
}
}
*/

// mais simples
void triangulo(int n){      
   /* 
  12321
   121
    1

*/
  int i,j,y;     
for(j=n;j>0;j--){ 
  for(y=n-j;y>0;y--)
   putchar(' ');
  for(i=1;i<=j;++i)
   printf("%d",i);
  for(i-=2;i>0;i--) 
   printf("%d",i);
  putchar('\n');
 }
}


int main(){
triangulo(6);
return 0;
}