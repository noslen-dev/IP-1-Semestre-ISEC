#include <stdio.h>

int potencia(int base, int expoente){
int potencia=1,i;
for(i=1 ; i<=expoente; ++i)
 potencia*=base;
return potencia;
}



void armstrong(int num){
int copy=num,copy_2=num,somador=0,n_digitos;
for(n_digitos=0; copy>0; copy/=10,++n_digitos)
;
for(; num>0 ;num/=10)
 somador+=potencia(num%10,n_digitos);
if(somador==copy_2)
 printf("%d is an armstrong number" ,copy_2);
else
  printf("%d is not an armstrong number" ,copy_2);
}

int main(){
armstrong(371);

return 0;
}