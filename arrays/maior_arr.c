#include <stdio.h>
#define DIM 6

int maior(int arr[], int dim){
int i, maior=arr[0],cnt=1;
for(i=1;i<DIM;++i)
 if(arr[i]>maior){
  cnt=1;
  maior=arr[i];
 } 
 else{
   if(arr[i]==maior)
   ++cnt;
 }
return cnt*maior;
}

int main(){
int arr[DIM],i;
printf("Digite 6 numeros inteiros ");
for(i=0; i<DIM;++i)
 scanf("%d",&arr[i]);
printf("%d",maior(arr,DIM));




return 0;
}