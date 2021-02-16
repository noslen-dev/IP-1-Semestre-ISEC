#include<stdio.h>

int main(){
int n,soma,d;
printf("Digite um numero ");
scanf("%d",&n);
for(soma=0; n>0; n=n/10){
  d=n%10;
  soma=soma+d;
}
printf("A soma dos digitos e %d",soma);
return 0;
}
