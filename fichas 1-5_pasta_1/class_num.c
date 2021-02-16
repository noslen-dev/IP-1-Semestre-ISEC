#include <stdio.h>

int main(){
int soma_dig=0,m,n,cnt_abundante=0,cnt_reduz=0,cnt_perf=0,fake_m;
printf("Introduza os limites(inferior(m) e superior(n)) ");
scanf("%d%d",&m,&n);
fake_m=m;
for(; m<=n;++m){
for(int i=1; i<=m;++i)
  if(m%i==0)
   soma_dig+=i;
if(m<soma_dig)
 ++cnt_abundante;
if(m>soma_dig)
 ++cnt_reduz;
if(m==soma_dig)
 ++cnt_perf;
}

printf("Entre %d e %d existem %d abundantes %d reduzidos e %d perfeitos ",fake_m,n,cnt_abundante,cnt_reduz,cnt_perf);
return 0;
}