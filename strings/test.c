#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMFRASE 100
#define TAMPAL 100

int main(){
int i,j,cnt,pos,res,logic,index;
char s[TAMFRASE], aux[TAMFRASE];
printf("Digite uma frase: ");
gets(s);
printf("Digite uma frase: ");
gets(aux);
for(i=0,res=1; i<strlen(s) && res;++i){
  for(; s[i]==' ';++i);
  for(index=i,logic=1,j=cnt=0; s[i]!=' ' && s[i]!='\0' && aux[j]!='\0';++i,++j,++cnt)
    if(s[i]!=aux[j])
      logic=0;
  if(logic && cnt==strlen(aux))
    res=0;
  }
for(pos=index; pos+strlen(aux)<=strlen(s);++pos)
  s[pos]=s[pos+strlen(aux)];
puts(s);
return 0;
}