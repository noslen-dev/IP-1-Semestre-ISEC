#include <stdio.h>

int main(){
int cnt=1,prev,num,maior=0;
printf("Introduza uma sequencia de numeros inteiros positivos: ");
scanf("%d",&prev);
if(prev!=0){
  do{
    scanf("%d",&num);
    if(num!=0){
      if(num>prev)
        ++cnt;
      else
        cnt=1;
      if(cnt>maior)
        maior=cnt;
     prev=num;
    }
  }while(num!=0);
 }
printf("No. valores da maior sequencia sequencialmente ordenada: %d",maior);
return 0;
}