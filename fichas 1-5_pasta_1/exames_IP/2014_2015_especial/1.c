#include <stdio.h>

int main(){
int i=1,pos,maior,num;
do{
  printf("Digite o numero inteiro %d ",i);
  scanf("%d",&num);
  if(num!=0){
    if(i==1){
      maior=num;
      pos=i;
    }
    if(num<0 && maior>0){
      maior=num;
      pos=i;
    }
    else
      if(num>maior && num<0){
        maior=num;
        pos=i;
      }
      ++i;
   }
 }while(num!=0);
printf("O maior valor negativo lido e o %d e surgiu na posicao %d",maior,pos);
return 0;
}