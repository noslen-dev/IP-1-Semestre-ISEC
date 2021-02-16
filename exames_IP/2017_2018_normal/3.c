#include <stdio.h>

int funcao(char frase[], char maior[]){
int i,cnt,max=-1,index,n_palavras,len;
for(i=0; frase[i]!='\0';++i);
len=i;
for(i=cnt=0; i<len ;++i)
  if(frase[i]==' ')
    ++cnt;
  n_palavras=++cnt;
  for(i=0; frase[i]!='\0';++i){
    for(cnt=0; frase[i]!=' ' && frase[i]!='\0';++i,++cnt);
    if(cnt>=max){
      max=cnt;
      index=i-cnt;
    }
  }
for(i=0; frase[index]!=' ' && frase[index]!='\0';++i,++index)
  maior[i]=frase[index];
maior[i]='\0';
return n_palavras;
}



int main(void){
char frase[]="Como eu gosto de IP";
char maior[20];
int n_palavras;
n_palavras=funcao(frase, maior);
printf("%d palavras\n", n_palavras);
printf("maior palavra = %s\n", maior);
return 0;
}