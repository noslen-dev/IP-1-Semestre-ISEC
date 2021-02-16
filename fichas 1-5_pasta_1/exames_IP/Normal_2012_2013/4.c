#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define TAM 100

int main(){
int i,j,pos,cnt,res,logic;
char frase[TAM], palavra[TAM];
printf("Digite uma frase: ");
gets(frase);
printf("Digite uma palavra: ");
gets(palavra);
for(i=0,res=1; frase[i]!='\0' && res;){ // encontrar a palavar
  for(; frase[i]==' ' && frase[i]!='\0';++i); // saltar espaços em branco
  for(j=cnt=0,logic=1; frase[i]!=' ' && palavra[j]!='\0' && frase[i]!='\0' && logic;++i,++j,++cnt)
    if(tolower(frase[i])!=tolower(palavra[j]))
      logic=0;
  if(logic && cnt==strlen(palavra)){
    res=0;
    pos=i-strlen(palavra);
  }
}

for(; pos<=strlen(frase)-strlen(palavra);++pos)//apagar essa palavra
  frase[pos]=frase[pos+strlen(palavra)];
  
puts(frase);
return 0;
}