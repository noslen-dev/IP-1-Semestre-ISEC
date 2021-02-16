#include<stdio.h>

int main(){
int a,b,tmp;
printf("Introduza dois numeros ");
scanf("%d%d",&a,&b);
tmp=a;
a=b;
b=tmp;
printf("valores torcados : %d---%d",a,b);



return 0;
}