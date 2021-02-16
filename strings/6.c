#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DIM 4


int duplicate_char(char s[], int dim, char ch){
int i,pos,cnt=0,cnt_2=0,res=0,logic=0;
for(i=0; s[i]!='\0' && i<dim;++i)
  if(s[i]==ch){
    for(pos=strlen(s);pos>=i && pos<dim;--pos)
      s[pos+1]=s[pos];
    s[i]=ch;
    ++i;
    ++cnt;
    logic=1; // se acontecer pelo menos uma vez
  }
for(i=0; s[i]!='\0';++i)
  if(s[i]==ch)
    ++cnt_2;
if(cnt_2==cnt*2 && logic) // se o numero de ch k havia antes é agr o dobro
  res=1;
return res;
}


int main(){
char s[DIM]="ene";
printf("%d\n",duplicate_char(s,DIM,'e'));
puts(s);

return 0;
}