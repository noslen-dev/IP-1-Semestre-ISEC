#include <stdio.h>

int main(){
int i=2,prev,num,somador=0;
printf("Introduza uma sequencia de numeros: ");
scanf("%d",&num);
prev=num; 
do{
  scanf("%d",&num); 
  if(i%2==0)
    if(num!=0) 
      somador+=prev*num; 
    else
      somador+=prev;
    prev=num;
    ++i;
 }while(num!=0);
printf("Resultado: %d",somador);
return 0;
}