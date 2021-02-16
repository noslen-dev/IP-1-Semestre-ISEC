#include <stdio.h>
#define DIM 100

int main(){
int dim, arr[DIM], i,sum=0;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
for(i=0; i<dim ;++i){
    printf("\n%d elemento ",i+1);
    scanf("%d",&arr[i]);
}
for(i=0; i<dim ;++i)
  sum+=arr[i];
printf("A soma de todos os elementos do array e %d",sum);
 


return 0;
}