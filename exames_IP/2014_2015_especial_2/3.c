#include <stdio.h>

int tolower_2(char ch){
if(ch>='A' && ch<='Z')
  return ch+32;
return ch;
}

int ProcuraToken(char origem[], char token[],int pos){
int i,cnt=0,len;
for(len=0; origem[len]!='\0';++len);
for(i=pos;i<len-1;++i)
  if(tolower_2(origem[i])==tolower_2(token[0]) &&tolower_2(origem[i+1])==tolower_2(token[1]))
    ++cnt;
return cnt;
}

int main(){
char st[250]="O meu ultimo exame. Melhor que passe";
char tk[3]="me";
int nvezes1, nvezes2;
nvezes1 = ProcuraToken(st, tk, 0);
printf("%d",nvezes1);
return 0;
}