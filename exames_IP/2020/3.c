#include <stdio.h>

void maiorPalavra(char frase[], char palavra[]){
int i,len,index,pos,cnt,maior=0;
for(i=0; frase[i]!='\0';++i);
len=i;
for(i=0; i<len;++i)
  for(index=i,cnt=0; frase[i]!=' '&& frase[i]!='\0';++i,++cnt);
  if(cnt>maior){
    maior=cnt;
    pos=index;
  }
for(i=0; frase[index]!=' ' && frase[index]!='\0';++i,++index)
  palavra[i]=frase[index];
palavra[i]='\0';
printf("%s",palavra);
}


int main(){
char palavra[100];
maiorPalavra("ana mol crossing",palavra);
puts(palavra);
return 0;
}