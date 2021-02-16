#include <stdio.h>
#include <string.h>
#define TAMFRASE 80 
#define TAMPAL 15
int replace(char frase[], char palavra[], int tamf, int tamp){
int i,j,pos;
for(i=strlen(frase)-1; frase[i]==' ' && i>=0 ; --i);
for(; frase[i]!=' ' && i>=0 ;--i);
for(++i,j=0; palavra[j]!='\0' && i+2<tamf; ++i,++j){
  if(frase[i]==' ' || frase[i]=='\0')
    for(pos=strlen(frase); pos>=i; --pos)
      frase[pos+1]=frase[pos];
    frase[i]=palavra[j];
 }
frase[i]='\0';
if(palavra[j]=='\0')
  return 1;
else
  return 0;
}

int main(){   
char f[TAMFRASE], p[TAMPAL];   
printf("Indique frase: ");     
gets(f);    
printf("Indique palavra: ");   
gets(p);  
if(replace(f,p,TAMFRASE,TAMPAL))     
  printf("%s",f);    
else  
  printf("Frase não modificada!\n"); 
return 0;
}