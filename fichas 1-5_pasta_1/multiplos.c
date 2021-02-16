#include<stdio.h>

int main(){
int sup,inf,mult_3,mult_5;
do{
    printf("Introduza o limite inferior e o limite superior ");
    scanf("%d%d",&inf,&sup);
}while(inf<0 || sup<0 || inf>=sup);

for(int i=0; ;++i){
  mult_5=i*5;
  mult_3=i*3;
  if(mult_5>sup)
   break;
  if(mult_5!=mult_3 && mult_5>=inf)
   printf("%d\n",mult_5);
}
return 0;
}