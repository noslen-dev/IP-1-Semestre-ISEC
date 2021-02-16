#include <stdio.h>

int tolower_2(char ch){
if(ch>='A' && ch<='Z')
  return ch+32;
return ch;
}

int ProcuraToken(char origem[], char token[]){
int i,j=0,cnt=0;
for(i=0; token[i]!='\0';++i)
  for(; origem[j]!='\0';++j)
    if(tolower_2(token[i])==tolower_2(origem[j])){
      ++cnt;
      break;
    }
return cnt;
}

int main(){
printf("%d",ProcuraToken("Como este e o 4o exame de Ip. E melhor que passe.","ISEC"));
return 0;
}