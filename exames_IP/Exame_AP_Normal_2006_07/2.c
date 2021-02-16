#include <stdio.h>
#define TAM 5
int vezes(int arr[], int dim){
int cnt=0,maior=arr[0],i;
for(i=0;i<dim;++i)
  if(arr[i]>maior)
    maior=arr[i];
for(i=0; i<dim ;++i)
  if(arr[i]==maior)
    ++cnt;
return cnt*maior;
}

int main(){
int arr[TAM],i;
printf("Digite valores para o array: ");
for(i=0; i<TAM ;++i)
  scanf("%d", &arr[i]);
printf("A soma do numero de vezes em que apareceu o maior elemento e %d",vezes(arr,TAM));
return 0;
}