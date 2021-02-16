#include <stdio.h>
#include <ctype.h>
#define DIM 100

int strlen(char s[]){
int i;
for(i=0; s[i]!='\0';++i);
return i;
}

char *lower_upper(char s[]){
int i,dim,j;
char tmp;
for(i=0, dim=strlen(s)-1; i<dim; ++i)
  for(j=0; j<dim ; ++j)
    if(isupper(s[j]) && islower(s[j+1])){
      tmp=s[j];
      s[j]=s[j+1];
      s[j+1]=tmp;
    }
return s;
}


int main(){
char s[]="EraUmaVezUMCavalo";
puts(lower_upper(s));

return 0;
}