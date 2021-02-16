#include <stdio.h>
#include <ctype.h>
#define DIM 100

int isnum(char ch){
return ch>='1' && ch<='9';
}

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

int is_alpha_dig(char s[]){
int i,res=1;
for(i=0; s[i]!='\0' ;++i)
  if(i%2==0){
    if(!isalpha(s[i]))
     res=0;
  }
  else
    if(i%2!=0)
      if(!isnum(s[i]))
        res=0;
return res;
}


int main(){
char s[]="ABA";
printf("%d",is_alpha_dig(s));


return 0;
}