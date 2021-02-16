#include<stdio.h>
int validacao(int inf, int sup, int num){
return num>=inf && num<=sup ? 1: 0;
}

int main(){
int inf,sup,num;
printf("Introduza tres valores(inf,sup e num) ");
scanf("%d%d%d",&inf,&sup,&num);
if(validacao(inf,sup,num)==1)
 printf("O numero esta dentro");
else
 printf("O numero esta fora");
return 0;
}