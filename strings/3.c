#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DIM 100


int main(){
int i;
char s[DIM];
printf("Digite uma frase: ");
gets(s);
for(i=0; s[i]!='\0';++i)
  if(s[i]!=' ' && s[i]!='\t') // se for diferente de espaço em branco escreve o carater
   putchar(s[i]);
  else{
    for(; s[i]==' ' || s[i]=='\t' && s[i]!='\0' ;++i); // salta o espaço em branco
    --i; //retoma i onde estava
    putchar('\n');
  }

return 0;
}
