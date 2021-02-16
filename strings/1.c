#include <stdio.h>
#define DIM 100

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

int main(){
int i,j;
char s[DIM], tmp;
printf("Digite uma string ");
gets(s);
for(i=0, j=strlen(s)-1; i<j ;++i,--j){
  tmp=s[i];
  s[i]=s[j];
  s[j]=tmp;
}
puts(s);
return 0;
}