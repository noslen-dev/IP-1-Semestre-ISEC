#include <stdio.h>

int main(){
int conta_num=0,posicao=0,num_curr=0,num;
do{
    printf("Digite um numero ");
    scanf("%d",&num);
    ++conta_num;
    if(num>=num_curr){
     num_curr=num;
     posicao=conta_num;
    }
}while(num!=0);

printf("O maior numero e %d surgui na posicao %d e a sequencia continha %d numeros",num_curr,posicao,conta_num-1);

return 0;
}