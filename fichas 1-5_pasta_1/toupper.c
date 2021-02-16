#include<stdio.h>
#include<ctype.h>

int main(){
char ch,c_aux;
printf("Digite um carater alfabetico ");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
 if(ch>='a' && ch<='z')
  printf("%c",c_aux=ch-32);/* touuper(ch)*/
 else
  printf("%c",ch);
}
else
 printf("Atencao! O caracter %c nao pertence ao alfabeto",ch);
return 0;
}