#include <stdio.h>
#define DIM 100


int main(){
int a[DIM],i,num,j,logic=1;
printf("Digite um numero ");
scanf("%d",&num);
for(i=0;num>0 && i<DIM;num/=10,++i)
 a[i]=num%10;
for(j=i-1,i=0;i<j && logic;++i,--j)
 if(a[i]!=a[j])
  logic=0;
if(logic)
 printf("O numero e capicua");
else
 printf("O numero nao e capicua");
return 0;
}