#include <stdio.h>
#define DIM 100

int soma(int i, int n, int arr[]){
int j,sum=0;
for(j=1; j<=n ;++j,++i)
 sum+=arr[i];
return sum;
}


int main(){
int dim, arr[DIM], i,j,maior,n;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
printf("Introduza %d numeros\n",dim);
for(i=0; i<dim ;++i){
    printf("%d elemento ",i+1);
    scanf("%d",&arr[i]);
 }
maior=arr[0];
for(n=1; n<dim ; ++n) // n representa o numero de grupos
 for(i=0;i<=dim-n;++i)
   if(soma(i,n,arr)>maior)
    maior=soma(i,n,arr);
printf("The largest sum of contiguous subarray is : %d",maior);
}