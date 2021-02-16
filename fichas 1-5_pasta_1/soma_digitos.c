#include <stdio.h>

int main(){
int soma=0,num,curr;
printf("Introduza um numero ");
scanf("%d",&num);
for( ; num>0; num=num/10)
 soma+=num%10;
printf("%d",soma);


return 0;
}