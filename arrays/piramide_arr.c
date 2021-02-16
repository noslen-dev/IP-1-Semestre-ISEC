#include <stdio.h>
#define N 3
//Devolve o indice de maior posicao do array em caso de iguais devolve o ultimo indice
int maior_pos(int arr[], int dim){ 
int i,maior=arr[0],pos;
for(i=1; i<dim;++i)
 if(arr[i]>maior){
  maior=arr[i];
  pos=i;
 }
return pos;
}

void escreve_pir(int arr[],int n){
int i,j,maior=maior_pos(arr,n),logic=1;
for(i=maior;i<n;++i){
 for(j=maior-1;j>=0;--j)
  if(arr[i]<=arr[j])
   logic=0;
 if(logic)
  printf("%d ",arr[i]);
}
for(i=maior-1; i>=0 ;--i)
 printf("%d ",arr[i]);
}

int main(){
int arr[N]={1,5,1};
escreve_pir(arr,N);




return 0;
}