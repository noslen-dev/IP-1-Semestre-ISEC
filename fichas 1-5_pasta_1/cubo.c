#include<stdio.h>
/*Programa que escreve todos os numeros de tres digitos entre m e n (m<n) cujo numero e 
dado pela soma do cubo dos seus algarismos */
int main(){
int m,n,d1,d2,d3;
do{
    printf("Digite o valor inferior e o valor superior ");
    scanf("%d%d",&m,&n);
}while(m<100 || m>=n || n>999);
for(; m<=n;++m){
d1=m%10;
d2=(m/10)%10;
d3=m/100;
if(d1*d1*d1 + d2*d2*d2 + d3*d3*d3 == m)
 printf("%d\n",m);
}

return 0;
}