#include <stdio.h>
#define DIM 100

int main(){
int dim, arr[DIM], i;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
for(i=0; i<dim ;++i){
    printf("\n%d elemento ",i+1);
    scanf("%d",&arr[i]);
}
for(i=dim-1 ;i>=0; --i)
 printf("%d ",arr[i]);


return 0;
}