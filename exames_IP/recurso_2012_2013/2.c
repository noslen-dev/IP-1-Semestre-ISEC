#include <stdio.h>
int ProdutoDigitos(int num){
int produto;
for(produto=1; num>0;num/=10)
  produto*=num%10;
return produto;
}

int main(){
int i=1,maior=-1,repetido=1,track=0;
int num;
do{
  do{
    printf("Digite o valor inteiro positivo %d: ",i);
    scanf("%d",&num);
  }while(num<0);
  if(num!=0){
    if(ProdutoDigitos(num)==maior){
      ++repetido;
      track=i;
    }
    else
      if(ProdutoDigitos(num)>maior){
        maior=ProdutoDigitos(num);
        repetido=1;
      }
      ++i;
   }
  }while(num!=0);
  printf("Maior valor do produto dos digitos = %d\n",maior);
  printf("Surgiu %d vezes, a ultima das quais na posicao %d",repetido,track);
return 0;
}

