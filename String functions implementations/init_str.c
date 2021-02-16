#include <stdio.h>
#include <ctype.h>
#define DIM 100

char *init_str(char s[]){
s[0]='\0';
return s;
}

int main(){
char s[]="quinze abacates";
printf("%d",strcounta(s));



return 0;
}