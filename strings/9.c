#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMFRASE 10
#define TAMPAL 50

int is_c_repeat(char s[], int x, char c){
int i,cnt,logic,res=0,cond=0;
for(i=0; s[i]!='\0';++i) //se o carater nem estiver na string nao a percorremos
  if(s[i]==c)
    cond=1; // se estiver na string
for(i=0,logic=cnt=1;i<strlen(s) && logic && cond; ++i){
  if(s[i]==s[i+1] && s[i]==c)
    ++cnt;
  else
    cnt=1;
  if(cnt==x) //saimos imediatamente do ciclo
    logic=0;
 }
if(logic==0 && cond) // se saimos do ciclo pelo logic é porque foi um sucesso
  res=1;
return res;
}

int cmpstr(char s[], char s2[]){ //stricmp
int i=0;
while(tolower(s[i])==tolower(s2[i]) && s[i]!='\0' && s2[i]!='\0')
  ++i;
return s[i]-s2[i];

}



int main(){
char ch, s[TAMFRASE],aux[TAMFRASE]="\0";
int maior=0;
printf("Introduza um carater: ");
scanf(" %c",&ch);
do{
    fflush(stdin);
    printf("Introduza uma string: ");
    gets(s);
    if(strlen(s)>maior && cmpstr(s,"fim")!=0 && is_c_repeat(s,3,ch)==1){
      maior=strlen(s);
      strcpy(aux,s);  
    }
}while(cmpstr("fim",s)!=0);
printf("A maior string em que o carater %c surgiu 3 vezes seguidas e: %s",ch,aux);
return 0;
}