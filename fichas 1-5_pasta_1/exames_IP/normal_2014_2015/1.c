#include <stdio.h>

int main(){
int cnt=0,maior=-1,num;
printf("Introduza uma sequencia de numeros inteiros positivos: ");
do{
  scanf("%d",&num);
  if(num!=0 && num>0)
    if(num%2!=0)
      ++cnt;
    else
      if(num>maior)
        maior=num;
 }while(num!=0);
printf("Numero de impares=%d, maior par=%d",cnt,maior);
return 0;
}