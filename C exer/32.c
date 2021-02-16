#include <stdio.h>
#define DIM 6

int main(){
int arr[DIM]={6,8,4,-5,7,9},i,j,logic=1,pos_i,pos_j,num=10;
for(i=0 ; i<DIM && logic ; ++i)
 for(j=0; j<DIM;++j)
  if(arr[i]+arr[j]==num){
      logic=0;
      pos_i=i;
      pos_j=j;
  }

printf("Os indices dos numeros que somados dao %d sao %d e %d",num,pos_i,pos_j);
return 0;
}