#include <stdio.h>
#define DIM 100

int main(){
int dim, arr[DIM], i,pos,tmp,maior_2;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
printf("Introduza %d numeros\n",dim);
for(i=0; i<dim ;++i){
    printf("%d elemento ",i+1);
    scanf("%d",&arr[i]);
 }
for(i=0; i<dim ;++i)
  for(pos=0; pos<dim-1 ;++pos)
    if(arr[pos]>arr[pos+1]){
        tmp=arr[pos];
        arr[pos]=arr[pos+1];
        arr[pos+1]=tmp;
    }
maior_2=arr[dim-2];
printf("O segundo maior elemento e %d ",maior_2);
}