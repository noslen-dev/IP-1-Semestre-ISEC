#include <stdio.h>

int main(){
int i=0, arr[100],mult=1,num,tam;
printf("Introduza uma sequencia de numeros inteiros positivos: ");
do{
  scanf("%d",&num);
  if(num!=0)
    arr[i++]=num;
}while(num!=0);
for(tam=i,i=0;i<tam;i+=2)
  if(i+1<tam)
    mult+=arr[i]*arr[i+1];
  else
    mult+=arr[i];
printf("Resultado= %d",mult);
return 0;
}