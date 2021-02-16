#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pede_aposta(int num){
    int aposta;
    printf("\nVez do jogador %d!\nQual e a sua aposta? ",num);
    scanf("%d",&aposta);
    return aposta;
}
int resultado(int a, int b){ 
if(a>b)
 return 1;
if(a<b)
 return -1;
return 0;
}

void escreve(int num,int valor,int jogador){
    if(num==1)
     printf("O valor %d esta acima do numero certo\n",valor);
    else
     if(num==-1)
      printf("O valor %d esta abaixo do numero certo\n",valor);
    else
     printf("O jogador %d acertou!!!",jogador);
}


int main(){
int num_adivinha,curr,logic;
srand(time(NULL)); 
num_adivinha=rand()%500;
for(int cnt=0; ; ++cnt){
  if(cnt%2==0){
   curr=pede_aposta(1);
   logic=resultado(curr,num_adivinha);
   escreve(logic,curr,1);
   if(logic==0)
    break;
}
  else{
   curr=pede_aposta(2);
   logic=resultado(curr,num_adivinha);
   escreve(logic,curr,2);
   if(logic==0)
    break;
  }
}
return 0;
}