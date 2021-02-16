#include <stdio.h>
#define TAMFRASE 81
#define TAMPALAVRA 81
int strlen(char s[]){
int i;
for(i=0; s[i]!='\0' ;++i);
return i;
}

int UltimaPalavra(char frase[], char palavra[], int dmax){
int i,dim,pos,index,j;
for(i=strlen(frase)-1;frase[i]==' ' && i>=0;--i);
pos=i;
for(; frase[i]!=' ';--i);
dim=pos-i;
if(dim<=dmax){
  for(j=0,index=++i;frase[i]!=' ' && frase[i]!='\0';++i,++j)
    palavra[j]=frase[i];
  palavra[j]='\0';
  return index;
}
else
  return -1;
}

int main(){
char frase[TAMFRASE],ultima[TAMPALAVRA];
int p=0;
printf("Indique uma frase:  ");
gets(frase);
p=UltimaPalavra(frase,ultima,TAMPALAVRA-1);
if(p>=0)
  printf("Ultima palavra: %s, que comeca na posicao %d da frase\n",ultima,p);
else 
  printf("Nao foi possivel definir a ultima palavra\n");
return 0;  
}