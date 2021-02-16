#include <stdio.h>

float media_final(int valor, int valido){
static float media=0;
static int cnt=0;
if(valido==1){
  media+=valor;
  ++cnt;
  return 0;
}
else
  if(valido==0)
    return media/cnt;
}

int main(){
int n,i,num;
printf("Introduza o numero de numeros que deseja introduzir: ");
scanf("%d",&n);
printf("Introduza os tais numeros");
for(i=0; i<n; ++i){
  scanf("%d",&num);
  media_final(num,1);
}
printf("A media dos valores introduzidos e %.2f",media_final(0,0));
return 0;
}