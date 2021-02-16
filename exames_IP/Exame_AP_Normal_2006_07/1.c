#include <stdio.h>

int main(){
char ch;
int cnt=0;
do{
    printf("\nEscreva um carater: ");
    scanf("%c",&ch);
    fflush(stdin);
    if(ch!='.'){
      ++cnt;
      if(ch>='0' && ch<='9')
        printf("Digito\n");
      else
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
          printf("Letra\n");
        else
          printf("Outro\n");
    }
}while(ch!='.');
printf("Foram lidos %d carateres",cnt);

return 0;
}