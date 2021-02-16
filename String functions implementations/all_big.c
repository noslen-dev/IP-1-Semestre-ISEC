#include <stdio.h>
#include <ctype.h>
#define DIM 100

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

char *all_big(char s[]){
int i,j;
for(i=j=0; s[i]!='\0';++i)
  if(isupper(s[i]))
    s[j++]=s[i];
s[j]='\0';
return s;
}

int main(){
char s[]="Ana Mola crossinG";
puts(all_big(s));

return 0;
}