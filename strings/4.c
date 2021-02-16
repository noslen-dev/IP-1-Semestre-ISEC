#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DIM 100

int main(){
char s[DIM], aux[DIM];
int i,j,cnt,logic,count=1;
printf("Digite uma frase ");
gets(s);
for(i=0; s[i]!='\0' && s[i]==' ';++i);
for(j=0; s[i]!='\0' && s[i]!=' ';++i,++j)
  aux[j]=s[i]; 
aux[j]='\0';
for(; s[i]!='\0';++i){
  for(logic=1,cnt=j=0; s[i]!='\0' && s[j]!='\0' && s[i]!=' ' && logic ;++i,++j,++cnt)
    if(tolower(aux[j])!=tolower(s[i]))
      logic=0;
  if(cnt==strlen(aux) && logic)
    ++count;
}
  printf("A palavra %s repete-se %d vezes",aux,count);
return 0;
}