#include <stdio.h>
#include <ctype.h>
#define DIM 100


char *allspaces(char s[]){
int i;
for(i=0; s[i]!='\0';++i)
  s[i]=' ';
return s;
}

int main(){
char s[]="monkey";
puts(allspaces(s));
return 0;
}