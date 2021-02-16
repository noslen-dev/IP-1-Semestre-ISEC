#include <stdio.h>

int par(int num){
    int i,pares=0,resultado;
    for(i=0;num>0;num/=10,++i)
     if((num%10)%2==0)
      ++pares;
    if(pares==i)
     resultado=1;
    else
     resultado=0;
    return resultado;
}
          
int main(){
int par_cnt=0,n_impar=0,num,par_func;
float media=0;
printf("Introduza uma sequencia de numeros inteiros\n");
do{
 do{
    printf(">>");
    scanf("%d",&num);
 }while(num<=0);
par_func=par(num);
if(par_func==1){
    media+=num;
    ++par_cnt;
    n_impar=0;
}
else
 ++n_impar;
}while(n_impar!=3);
printf("O utilizador introduziu %d numeros em que todos os algarismos sao pares e a sua media e %.3f",
par_cnt,media/par_cnt);
return 0;
}