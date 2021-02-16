#include <stdio.h>
#include <string.h>
int main(){
char s[]=" Hoje há exame de Algoritmos e Programacao.  ";
int i;
for(i=strlen(s)-1; s[i]!='.' && i>0 ;--i);
for(; s[i]!=' ' && i>=0 ;--i);
for(++i; s[i]!='.' && s[i]!='\0';++i)
  if(s[i]>='a' && s[i]<='z')
    putchar(s[i]-32);
  else
    putchar(s[i]);
return 0;
}