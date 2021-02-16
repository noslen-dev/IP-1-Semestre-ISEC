#include <stdio.h>
int strlen(char s[]){
int i,cnt=0;
for(i=0; s[i]!='\0';++i);
return i;
}

int LimparEspacos(char frase[]){
int i,pos,cnt=0;
for(i=0; frase[i]==' ';++i){
  for(pos=i;pos<strlen(frase);++pos)
    frase[pos]=frase[pos+1];
    --i;
    ++cnt;
 }
for(i=0; i<strlen(frase)-1;++i)
  if(frase[i]==' ' && frase[i+1]==' '){
    for(pos=i;pos<strlen(frase);++pos)
    frase[pos]=frase[pos+1];
    --i;
    ++cnt;
  }
  for(i=strlen(frase)-1; frase[i]==' ';--i)
    frase[i]='\0';
    ++cnt;
return cnt;
}

int main(){
char frase[]= "   Hoje  chegou  o  cheque  do  chefe  para  pagar  os  chazinhos  do  outro  chato   ";
puts(frase);
printf("Numero de carateres: %1.1d\n", strlen(frase));
printf("Espacos retirados: %1.1d\n", LimparEspacos(frase));
puts(frase);
printf("Numero de carateres: %1.1d\n", strlen(frase));    
return 0;
}