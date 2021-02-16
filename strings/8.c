#include <stdio.h>
#include <string.h>
#define TAMFRASE 10
#define TAMPAL 50

int insert_char_end(char s[], int tam, char c, int x){
int i,cnt=0;
for(i=strlen(s); i<tam-1 && cnt<x; ++i,++cnt){
  s[i+1]=s[i];
  s[i]=c;
 }
return cnt;
}

int main(){
char s[TAMFRASE];
printf("Digite uma frase: ");
gets(s);
printf("%d\n",insert_char_end(s,10,'Z',10));
puts(s);
return 0;
}