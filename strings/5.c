#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DIM 150
//Função que insere uma palavra numa frase colocando um espaço antes do indice em que foi inserida
//e depois, se estas posições não conterem espaços
void insert(char frase[], char palavra[], int n){
int i,j,dim=strlen(palavra);
for(i=strlen(frase);i>=n;--i)
  frase[i+dim]=frase[i]; //cehgar todos os elementos da frase o tamanho da palavra para a frente
for(i=n,j=0; palavra[j]!='\0';++i,++j)
  frase[i]=palavra[j]; //copiar a palavra para a frase
if(frase[i]!=' '){ //se a seguir à palavra(i) não tiver um espaço em branco
  for(j=strlen(frase);j>=i;--j) //todos elementos para a frente
    frase[j+1]=frase[j];
  frase[i]=' '; //inseri-lo
 }
 if(frase[i-strlen(palavra)-1]!=' ' && i-strlen(palavra)!=0 ){ // se antes nao tiver e nao tivermos no indice 0
   i=i-strlen(palavra); //posição do primeiro carater inserido
   for(j=strlen(frase);j>=i;--j)
     frase[j+1]=frase[j]; //chegar todos para a frente e inserir espaço em branco
   frase[i]=' ';
 }
}


int main(){
char frase[DIM]="ana", palavra[DIM]="Verde";
insert(frase,palavra,1);
puts(frase);




return 0;
}