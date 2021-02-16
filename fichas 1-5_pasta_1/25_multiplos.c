#include<stdio.h>

int main(){
int num;
printf("Digite um numero: ");
scanf("%d",&num);
for(int i=1; i<=25;){
 for(int j=1;j<=5;++j)
  printf("%2d ",i++*num);
 putchar('\n');
}
return 0;
}