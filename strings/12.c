#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMFRASE 100
#define TAMPAL 50

void Trocar_Palavras(char s[]){
int i,pos,j,inic=strlen(s);
char aux[TAMFRASE],tmp;
for(i=0; s[i]!=' ' && s[i]!='\0';++i) //copiar a primeira palavar para uma string auxiliar
  aux[i]=s[i];
aux[i]='\0';

for(i=strlen(s)-1;s[i]!=' ' && i>=0 ;--i); //encontrar o espaço em branco antes da ultima palavra

for(++i,j=0; s[i]!='\0';++i,++j) //inserir a ultima palavra no espaço da primeira
  if(s[j]==' '){
    tmp=s[i];
    for(pos=strlen(s);pos>=j;--pos) // efetuar as deslocações necessárias
      s[pos+1]=s[pos];
    s[j]=tmp;
    ++i;
  }
  else // se nao for preciso fazer nada
    s[j]=s[i];
for(i=strlen(s)-1;s[i]!=' ' && i>=0 ;--i); //voltar a encontrar o indice do espaço em branco antes da ultima palavra

for(++i,j=0; aux[j]!='\0';++j,++i)//inserir a auxiliar no espaço da ultima
  s[i]=aux[j];
s[i]='\0';

if(strlen(s)!=inic) //se o tamanho da novo for diferente do tamanho da antiga
  for(i=0; s[i]!=' ';++i); // apagar alguns carateres(caso em em que a primeira palavra e maior do que a ultima)
  for(--i; strlen(s)!=inic;--i)
    for(pos=i; s[pos]!='\0';++pos)
      s[pos]=s[pos+1];
}



int main(){
char s[TAMFRASE]="ana";
Trocar_Palavras(s);
puts(s);


return 0;
}
