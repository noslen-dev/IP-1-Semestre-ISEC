#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMFRASE 100
#define TAMPAL 50

int limpar_espacos(char s[]){
int i,j,pos,cnt=0;
for(i=0; s[i]==' ';++i); // encontrar o primeiro espaço em branco
if(i>0){ // se ele existir
  cnt=i; 
  for(pos=0; i<=strlen(s);++i,++pos)
    s[pos]=s[i]; //apaga-lo
 }
for(i=0; s[i]!=' ' && s[i]!='\0';++i); //encontrar o espaço em branco do meio
for(; s[i]!='\0';++i) 
  if(s[i]==s[i+1] && s[i]==' '){ // se existirem dois seguidos
    ++cnt;
    for(pos=i; pos<strlen(s);++pos)
      s[pos]=s[pos+1]; // elimina-los andando uma posição para traz
    --i; // meter i a apontar para o espaço em k estav inicialmente
  }
for(i=strlen(s)-1; s[i]==' ';--i,++cnt) // apagar os espaços em branco do fim
  s[i]='\0';
return cnt;
}

int main(){
char s[TAMFRASE]="   Hoje  chegou  o  cheque  do  chefe  para  pagar  os  chazinhos  do  outro  chato   ";
printf("%d\n",limpar_espacos(s));
puts(s);



return 0;
}