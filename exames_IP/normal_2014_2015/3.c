#include <stdio.h>

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

int is_l_s(char ch){
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch==' ')
  return 1;
else
 return 0;
}

int main(){
int i,pos;
char s[100];
printf("Digite uma frase: ");
gets(s);
for(i=0; s[i]!='\0';++i)
  if(is_l_s(s[i])==0){
    for(pos=i; pos<strlen(s);++pos)
      s[pos]=s[pos+1];
    --i;
  }
puts(s);
return 0;
}