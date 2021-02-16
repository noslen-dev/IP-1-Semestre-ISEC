#include <stdio.h>
#define DIM 5
int compara(int a[], int b[], int dim_a,int dim_b){
int i,resul=0;
if(dim_a==dim_b){
  for(i=0; i<DIM && a[i]==b[i];++i)
   ;
}
if(i==dim_a)
 resul=1;
return resul;
}




int main(){
int a[DIM]={1,2,3,4},b[DIM]={1,2,3,4,5};
printf("%d",compara(a,b,DIM,4));



return 0;
}