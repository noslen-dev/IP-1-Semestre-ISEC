#include <stdio.h>
#define DIM 100

int main(){
int dim, arr[DIM], i,pos=0,move,num;
printf("Introduza o numero de elementos para guardar no array ");
scanf("%d",&dim);
printf("Introduza %d numeros\n",dim);
for(i=0; i<dim ;++i){
    printf("%d elemento ",i+1);
    scanf("%d",&arr[i]);
 }

printf("Digite a posicao que quer apagar(1-n) ");
scanf("%d",&pos);
--pos;//para ser 2 elemento em vez de terciero-->generico
for(; pos<dim-1;++pos)
  arr[pos]=arr[pos+1];
--dim;//diminuir a dimensao do array
for(i=0; i<dim;++i)
 printf("%d ",arr[i]);
}