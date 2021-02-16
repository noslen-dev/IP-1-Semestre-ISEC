#include<stdio.h>

int main(){
char c;
printf("Indique um digito: ");
scanf(" %c",&c);
printf("%c          %c\n",c,c);
printf("  %c      %c  \n",c,c);
printf("    %c  %c    \n",c,c);
printf("     %c%c     \n",c,c);
return 0;
}