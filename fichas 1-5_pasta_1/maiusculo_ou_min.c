#include<stdio.h>

int main(){
char ch;
printf("Digite um carater ");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z')
 printf("O carater e uma letra maiuscula");
else 
 if(ch>='a' && ch<='z')
  printf("O carater e uma letra minuscula");
 else
  printf("O careter nao e uma letra minuscula nem maiuscula");

return 0;
}