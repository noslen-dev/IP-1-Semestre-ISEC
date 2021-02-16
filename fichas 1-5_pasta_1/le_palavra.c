#include <stdio.h>

int escreve_palavra(){
char c;
int cnt=0;
printf("Digite uma palavra: ");
for(char ch; scanf("%c",&ch) && ch!='\n';++cnt )
 putchar(ch);
return cnt;
}



int main(){
printf("\n%d",escreve_palavra());


return 0;
}