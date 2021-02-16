#include<stdio.h>
int n_digitos(int num){ /* devolve o numero de digitos de um numero*/
int cnt=0;
for(int i=num ; i!=0; ++cnt)
 i=i/10;
return cnt;
}


int main(){
printf("%d",n_digitos(56676));



return 0;
}
