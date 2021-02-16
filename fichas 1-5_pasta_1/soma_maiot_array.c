#include<stdio.h>
#define TAM 6

int maior(int arr[], int size){
int maior= arr[0],i,cnt=1,prev;
for(i=1; i<TAM; ++i)
 if(arr[i]>=maior){
  prev=maior;
  maior=arr[i];
  if(prev==arr[i])
   ++cnt;
 }
 return maior*cnt;
}



 

int main(){
int arr[TAM];
printf("Digite uma sequencia de  6 numeros ");
for(int i=0; i<TAM;++i)
 scanf("%d",&arr[i]);
printf("%d",maior(arr,TAM));


return 0;
}