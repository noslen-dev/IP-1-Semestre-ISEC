#include <stdio.h>
#define DIM 100

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}


char *entremeado(char s[], int n){
int i,j;
for(i=n+1,j=1; i<strlen(s);i+=n+1,++j)
  s[j]=s[i];
s[j]='\0';
return s;
}

int main(){
char s[]="ABCD";
puts(entremeado(s,7));

return 0;
}