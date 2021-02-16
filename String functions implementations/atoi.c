#include <stdio.h>
#include <ctype.h>
#define DIM 100

int atoi(char s[]){
int i=0,num=0;
if(s[0]=='-' || s[0]=='+')
  ++i;
for(; isdigit(s[i]); ++i)
  num=num*10+s[i]-'0';

if(s[0]=='-')
  num*=-1;
return num;
}



int main(){
char s[]="7abc78";
printf("%d",atoi(s));

return 0;
}