#include <stdio.h>
#define DIM 10

int main(){
int arr[DIM][DIM],i,j,dim,arr2[DIM][DIM],sum[DIM][DIM];
printf("Digite o tamanho da matriz quadrada ");
scanf("%d",&dim);
printf("Digite os elementos da primeira matriz\n");
for(i=0; i<dim ;++i)
 for(j=0; j<dim ;++j){
  printf("Elemento [%d][%d] ",i,j);
  scanf("%d",&arr[i][j]);
 }
printf("Digite os elementos da segunda matriz\n");
for(i=0; i<dim ;++i)
 for(j=0; j<dim ;++j){
  printf("Elemento [%d][%d] ",i,j);
  scanf("%d",&arr2[i][j]);
 }
for(i=0; i<dim ;++i)
 for(j=0; j<dim ;++j)
   sum[i][j]=arr[i][j]+arr2[i][j];

printf("A soma das matrizes e\n");
for(i=0; i<dim ;++i){
 for(j=0; j<dim ;++j)
  printf("%d ",sum[i][j]);
 putchar('\n');
 }

}