#include <stdio.h>
#define DIM 100

int main(){
int dim, arr[DIM], i,j,pos,tmp;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
printf("Introduza %d numeros\n",dim);
for(i=0; i<dim ;++i){
    printf("%d elemento ",i+1);
    scanf("%d",&arr[i]);
 }
for(i=0;i<dim;++i)
  for(pos=0; pos<dim-1;++pos)
    if(arr[pos]>arr[pos+1]){
      tmp=arr[pos];
      arr[pos]=arr[pos+1];
      arr[pos+1]=tmp;
    }
 
for(i=0 ; i<dim ;++i)
 printf("%d ",arr[i]);
}
