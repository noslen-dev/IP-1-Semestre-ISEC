#include <stdio.h>
/*Encontra os divisores de qualquer número inteiro, é possível calcular os divisores de vários números */
int main(){
int num=5;
for(; ; ){
 printf("Digite um numero ");
 scanf("%d",&num);
 for(int i=1; i<=num;++i)
  if(num%i==0)
   printf("%d\n",i);
}


return 0;
}