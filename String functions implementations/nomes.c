#include<stdio.h>
#define DIM 100
int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

void nome_sob(char nome[], char sob[]){
int i,pos,j;
for(i=0; nome[i]!='\0' ;++i)
 if(nome[i]==' ')
  pos=i;
for(i=pos+1,j=0;nome[i]!='\0';++i,++j)
 sob[j]=nome[i];
sob[j]='\0';
nome[pos]='\0';
}


int main(){
char nome[DIM];
char sob[DIM];
do{
  printf("Digite o seu nome ");
  gets(nome);
  if(nome[0]!='\0'){
    nome_sob(nome,sob);
    printf("%s %s\n",sob,nome);
  }  
} while (nome[0]!='\0');

return 0;
}