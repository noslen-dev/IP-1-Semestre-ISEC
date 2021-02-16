#include <stdio.h>
int main(){
int num,logic=1,anterior;
printf("Digite uma sequencia de numeros inteiros ");
scanf("%d",&anterior);
if(anterior!=0){
  do{ 
    scanf("%d",&num);
    if(num!=0){
      if(num<=anterior)
        logic=0;
      anterior=num;
    }
  }while(num!=0);    
 }
if(logic)
  printf("Ordem crescente");
return 0;
}