#include <stdio.h>
#include <string.h>
#define TAMFRASE 150
#define TAMPAL 50
// substituir a ultima palavra da frase com a palavra passada por argumento
int replace(char frase[], char palavra[], int tamf, int tamp){
int i,j,pos,local,logic=0;
for(i=strlen(frase)-1; frase[i]==' ';--i);
for(; frase[i]!=' ' && i>=0; --i);
local=++i; //posição da ultima palavra
for(j=0;palavra[j]!='\0' && i+1<tamf;++i,++j){
  if(frase[i]==' ' || frase[i]=='\0')
    for(pos=strlen(frase);pos>=i;--pos)
      frase[pos+1]=frase[pos];
    frase[i]=palavra[j];
 }
frase[i]='\0';
while(local<tamf && j<tamp && frase[local++]==palavra[j++]); //comparar a inserida com a original
if(j-1==strlen(palavra))
  logic=1;
return logic;
}

int main(){
char f[TAMFRASE], p[TAMPAL];
printf ("Indique frase: "); 
gets(f);
printf("Indique palavra: "); 
gets(p);
printf("%d\n",replace(f,p,TAMFRASE,TAMPAL));
puts(f);
return 0;  
}