#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMFRASE 10
#define TAMPAL 50

int TrocarPorCarater(char frase[], char par[], char ch){
int i,cnt,pos;
for(i=cnt=0; i<strlen(frase)-1;++i)
  if(frase[i]==par[0] && frase[i+1]==par[1]){
    frase[i]=ch;
    ++cnt;
    for(pos=i+1;pos<strlen(frase);++pos)
      frase[pos]=frase[pos+1];
  }
return cnt;
}


int main(){
char frase[]= "Hoje chegou o cheque do chefe para pagar os chazinhos do outro chato";
char par[]= "ch",carater= 'x';
printf("\nForam efetuadas %1.1d substituicoes:\n", TrocarPorCarater(frase, par, carater));
puts(frase);


return 0;
}