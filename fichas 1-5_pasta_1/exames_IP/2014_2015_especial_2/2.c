#include <stdio.h>

int ContaDigito(int valor, int digito){
int cnt;
for(cnt=0; valor>0; valor/=10)
  if(valor%10==digito)
    ++cnt;
return cnt;
}




int main(){
int cnt=0, num,total=0,logic,i;
printf("Introduza  valores  inteiros  positivos(para  terminar indique um valor que não tenha dígitos par):");
do{
  do{
    scanf("%d",&num);
  }while(num<0);
  for(i=total=0; i<10; i+=2)
    total+=ContaDigito(num,i);
  logic=total;
  cnt+=logic;
}while(logic!=0);
printf("Número de dígitos par introduzidos: %d",cnt);
}