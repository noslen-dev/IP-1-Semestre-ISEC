#include <stdio.h>
#define DIM 100

char *mygets(char s[], int n){
int i;
for(i=0; i<n && scanf("%c",&s[i]) && s[i]!='\n' ;++i);
s[i]='\0';
return s;
}


int main(){
char s[DIM];
puts(mygets(s,DIM));



return 0;
}