#include <stdio.h>
#include <ctype.h>
#define DIM 100

int conta_primeiro(char s[]){
int i,cnt=0,logic=1;
char ch;
for(i=0; s[i]!='\0' && logic;++i) //encontrar o primeiro carater k nao é espaço em branco
  if(s[i]!=' '){
    ch=s[i];
    logic=0;
    }
for(i=0; s[i]!='\0';++i) //por cada vez k ele aparece incrementar cnt
  if(tolower(s[i])==tolower(ch))
    ++cnt;
return cnt;
}

int main(){
printf("%d",conta_primeiro(" pogorp"));

return 0;
}