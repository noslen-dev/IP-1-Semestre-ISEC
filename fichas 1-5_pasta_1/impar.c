#include <stdio.h>

int verifica(int num){
int i,pares=0,resul;
for(i=0;num>0;num/=10,++i)
 if((num%10)%2==0)
  ++pares;
if(pares==i)
 resul=1;
else
 resul=0;
return resul;

}

int main(){
printf("%d",verifica(468));


return 0;
}