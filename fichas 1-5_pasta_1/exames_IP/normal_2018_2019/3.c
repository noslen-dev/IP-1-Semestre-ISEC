#include <stdio.h>

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

int TrocarPorCarater(char frase[], char par[], char carater){
int i,pos,cnt=0;
for(i=0; i<strlen(frase)-1;++i)
  if(frase[i]==par[0] && frase[i+1]==par[1]){
    for(pos=i; pos<strlen(frase);++pos)
      frase[pos]=frase[pos+1];
    frase[i]=carater;
    ++cnt;
  }
  return cnt;
}

int main(){
char frase[]= "Hoje chegou o cheque do chefe para pagar os chazinhos do outro chato";
char par[]= "ch";
char carater= 'x';
puts(frase);
printf("\nForam efetuadas %1.1d substituicoes:\n", TrocarPorCarater(frase, par, carater));
puts(frase);
return 0;
}