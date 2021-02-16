#include <stdio.h>
#include <string.h>

void inverter_frase(char s[], char aux[]){
int i,j,res,logic,dim,index,inic,pos_1,pos_2;
char tmp;
for(i=0; i<strlen(s) && res;++i){ //percorrer a string
  for(index=i; s[i]!='\0' && s[i]!=' ';++i); //passar para o proximo espaço em branco
  dim=i-index; // dimensao da palavra k estamos a considerar
  if(dim==strlen(aux)){ // se a palavra k apanhamos for igual a dimensao da frase
    for(j=0, inic=index,logic=1; s[index]!='\0' && s[index]!=' ';++index,++j) //comparar a palavra k apanhamos com a nossa palavra ate cehgarmos a um espaço em branco ou ate ao terminador
      if(s[index]!=aux[j]) // se forem diferentes
        logic=0;//sinal k sao diferentes
    if(logic){ //se logic nao ta a zero ta a 1 e elas sao iguais
      res=0;//parar o ciclo
      pos_1=inic;//posição do primeiro carater da palavra na frase
      pos_2=i-1; // posição do ultimo carater da palavra na frase
     }
   }
 }

if(res==0){ // se a palavra existe
for(; pos_1<pos_2;++pos_1,--pos_2){ // inverter
  tmp=s[pos_1];
  s[pos_1]=s[pos_2];
  s[pos_2]=tmp;
  }
 }
}



int main(){
char s[100]="camarao com pao e muito gostosim";
inverter_frase(s,"ana");
puts(s);

return 0;
}