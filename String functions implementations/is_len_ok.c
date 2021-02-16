#include <stdio.h>
#include <ctype.h>
#define DIM 100

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

int is_len_ok(char s[], int comprimento){
return comprimento==strlen(s);
}

int main(){
char s[]="OLA";
printf("%d",is_len_ok(s,3));

return 0;
}