#include <stdio.h>

int ProdutoDigitos(int num, int nd){
int i,produto=1;
for(i=0; i<nd;++i,num/=10)
  produto*=num%10;
return produto;
}

int is_5(int num){
int i;
for(i=0; num>0 ;++i,num/=10);
return i;
}

int main(){
int num,five,prod;
do{
  printf("Digite um numero com 5 digitos: ");
  scanf("%d",&num);
}while(is_5(num)!=5);
five=num%10;
prod=ProdutoDigitos(num/10,4);
if(five>prod)
  printf("O  quinto  digito  e  maior  do  que  o  produto  dos  4  digitos  menos significativos!");
else
  if(prod>five)
    printf("O  quinto  digito  e  menor  do  que  o  produto  dos  4  digitos  menos significativos!");
  else
    printf("O  quinto  digito  e  igual ao  produto  dos  4  digitos  menos significativos!");
return 0;
}