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
printf("Digite o numero que quer inserir ");
scanf("%d",&num);
printf("Digite a posicao em que quer inserir o numero ");
scanf("%d",&pos);
--pos;//para ser 2 elemento em vez de terciero-->generico

for(i=dim-1;i>=pos;--i) // i==ao indice do ultimo elemento
 arr[i+1]=arr[i]; //mover todos os elementos ate ao indice desejado para a direita
arr[pos]=num;//inserir o novo numero
++dim;//aumentar o tamanho do array
for(i=0; i<dim;++i)
 printf("%d ",arr[i]);



}