#include <stdio.h>
int ContaOcorrencias(int vec[],int tam,int valor){
int i,cnt=0;
for(i=0; i<tam;++i)
  if(vec[i]==valor)
    ++cnt;
return cnt;
}

int main(){
int v[5],min,max,cnt,i,num,j,count,moda,maior;
printf("Introduza uma sequencia de numeros inteiros positivos: ");
for(i=j=0; i<5; ++i){
  scanf("%d",&num);
  if(num>=0)
    v[j++]=num;
 }
cnt=j;
for(i=0,max=v[0],min=v[0]; i<cnt; ++i){ //descobrir o maximo e o minimo
  if(v[i]>max)
    max=v[i];
  if(v[i]<min)
    min=v[i];
 }
for(i=maior=count=0; i<cnt; ++i,count=0){
 count=ContaOcorrencias(v,cnt,v[i]);
 if(count>maior){
   maior=count;
   moda=v[i];
 }
}
printf("Min= %d ; Max= %d ; Moda= %d; No. ElementosValidos= %d",min,max,moda,cnt);
return 0;
}