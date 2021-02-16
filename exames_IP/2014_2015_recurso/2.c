#include <stdio.h>

int soma3Digitos(int numero){
int i,soma=0;
printf("%d\n",numero);
for(i=0; i<3; ++i, numero/=10)
  soma+=numero%10;
return soma;
}

int main(){
int i,menos,mais,num;
for(i=1; i<=100; ++i){
  do{
    printf("Insira o %d numero ",i);
    scanf("%d",&num);
  }while(num<0);
  menos=soma3Digitos(num);
  mais=soma3Digitos(num/1000);
  if(menos>mais)
    printf("Maior Soma: Menos significativo\n");
  else
    if(mais>menos)
    printf("Maior Soma: Mais significativo\n");
    else
    printf("Maior Soma: Iguais\n");
 }

return 0;
}