#include <stdio.h>
#define N 8
int EliminaValor(int v[],int tam,int num){
int i,pos;
for(i=0;i<tam;++i)
  if(v[i]==num){
    for(pos=i;pos<tam-1;++pos)
      v[pos]=v[pos+1];
    v[pos]=0;
    --tam;
    --i;
 }
return tam;
}

int main(){
int rifas[N],i,num,n_rifas;
for(i=0; i<N; ++i)
  do{
    printf("Rifa n %d=> Indique o numero do cartao de cidadao do comprador: ",i+1);
    scanf("%d",&rifas[i]);
    if(rifas[i]==0)
      printf("Numero de cartao invalido");
  }while(rifas[i]==0);
  do{
    printf("Indique o numero da rifa sorteada:");
    scanf("%d",&num);
  }while(num<0 || num>N);
  printf("O vencedor tem o cartao de cidadao n %d",rifas[num-1]);
  n_rifas=EliminaValor(rifas,N,rifas[num-1]);
  n_rifas=N-n_rifas;
  printf(" e comprou um total de %d rifas",n_rifas);
  return 0;
}