#include <stdio.h>
#include <string.h>
#define TAMFRASE 100
#define TAMFIM 100
int func(char st1[], char st2[], char stfim[], int tamf){
int i,j;
for(i=j=0; i<tamf && (j<strlen(st1)||j<strlen(st2));++i,++j){
  if(j<strlen(st1))
    stfim[i++]=st1[j];
  if(j<strlen(st2))
    stfim[i]=st2[j];
  else
    --i;
 }
if(i<tamf)
  return 1;
else
 return 0;
}

int main(){
char f1[TAMFRASE], f2[TAMFRASE], final[TAMFIM]="";
printf("Indique a frase 1: "); 
gets(f1);
printf("Indique a frase 2: "); 
gets(f2);
if(func(f1, f2,final,TAMFIM))
  printf("Frase modificada: %s",final);
else
  printf("Frase nao modificada!\n");
return 0;
}