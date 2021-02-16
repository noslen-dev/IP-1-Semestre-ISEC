#include <stdio.h>
#define DIM 100

int main(){
int dim, arr[DIM], i,j,cnt=0,num,logic=1;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
printf("Introduza %d numeros\n",dim);
for(i=0; i<dim ;++i){
    printf("%d elemento ",i+1);
    scanf("%d",&arr[i]);
 }
for(i=0; i<dim && logic ; ++i){
 for(j=0 ; j<dim ; ++j)
  if(arr[i]==arr[j])
   ++cnt;
 if(cnt%2!=0){
  num=arr[i];
  logic=0;
  }
  cnt=0;
 }
logic ? printf("There are no numbers that occur an odd number of times") : printf("The number is %d",num);
return 0;
}