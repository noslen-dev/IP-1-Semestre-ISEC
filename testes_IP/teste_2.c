#include <stdio.h>

void dec_bin(int num){
int start,i,j,copy=num;
for(; copy>0;copy/=2){
 if(copy==2)
  start=2;
 if(copy==3)
  start=3;
}
putchar('1');
for( ; start<=num;start*=2)
    for(j=num; j>0;j/=2)
     if(start+1==j){
      printf("%d",(start+1)%2);
      ++start;
     }
    else
     if(start==j)
      printf("%d",start%2); 
}
int main(){
dec_bin(13);



return 0;
}