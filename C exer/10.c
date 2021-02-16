#include <stdio.h>
#define DIM 100

int main(){
int arr[DIM],i,dim,maior,menor,odd[DIM],even[DIM],i_even=0,i_odd=0;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
printf("Introduza %d numeros\n",dim);
for(i=0; i<dim ;++i){
    printf("%d elemento ",i+1);
    scanf("%d",&arr[i]);
 }
for(i=0; i<dim;++i)
 if(arr[i]%2==0)
  even[i_even++]=arr[i];
 else
  odd[i_odd++]=arr[i];
printf("Os pares sao\n");
for(i=0; i<i_even;++i)
  printf("%d ",even[i]);
printf("\nOs impares sao\n");
for(i=0; i<i_odd;++i)
  printf("%d ",odd[i]);
}