 #include <stdio.h>
#include <ctype.h>
#define DIM 100


char max_ascii(char s[]){
int i;
char maior=s[0];
for(i=0; s[i]!='\0';++i)
  if(s[i]>maior)
    maior=s[i];
return maior;
}

int main(){
putchar(max_ascii("zebra crl z"));
return 0;
}