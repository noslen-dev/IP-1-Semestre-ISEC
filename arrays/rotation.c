#include <stdio.h>
#define N 6
//Devolve o indice de maior posicao do array em caso de iguais devolve o ultimo indice
int maior_pos(int arr[], int dim){ 
int i,maior=arr[0],pos=0;
for(i=1; i<dim;++i)
 if(arr[i]>=maior){
  maior=arr[i];
  pos=i;
 }
return pos;
}

//Move todos os elementos do array uma posicao para a frente o ultimo passa a primeiro
void rotation(int arr[], int n){
int i,last=arr[n-1];
for(i=n-1;i>=1;--i)
 arr[i]=arr[i-1];
arr[0]=last;
}

//Faz as rotacoes para a direita necessarias para que o maior elemento do vetor apareca na ultima posicao
int main(){
int arr[N]={1,2,7,3,4,5},i,maior,indice;
indice=maior_pos(arr,N);
maior=arr[indice];
while(arr[N-1]!=maior)
    rotation(arr,N);
    
for(i=0; i!=N; ++i)
 printf("%d ",arr[i]);

return 0;
}