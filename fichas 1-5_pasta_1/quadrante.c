#include<stdio.h>

int main(){
int x,y;
printf("Introduza as cordenadas ");
scanf("%d%d",&x,&y);
if(x==0)
  if(y==0)
    printf("O ponto esta na origem");
  else
    printf("O ponto esta no eixo dos y");
else
  if(y==0)
    printf("O ponto esta no eixo dos x");
  else
    if(x>0)
      if(y>0)
        printf("O ponto esta no I quadrante");
      else
        printf("O ponto esta no IV quadrante");
    else
      if(y>0)
        printf("O ponto esta no II quadrante");
      else
        printf("O ponto esta no III quadrante");

return 0;
}