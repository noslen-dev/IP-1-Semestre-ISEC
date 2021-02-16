#include <stdio.h>
#include <ctype.h>
#define DIM 15

void correto(char arr[], char c1, char c2){
int i,pos;
for(i=0; i<DIM ;++i)
 if(isdigit(arr[i]))
  pos=i;
for(i=pos; i>=3 ;--i)
 arr[pos+2]=arr[pos];
arr[3]=c1;
arr[4]=c2;
}

int main(){
int i;
char arr[DIM]={'P','T','1','2','3','5','8','1','2','3','0','0'};
correto(arr,'Q','2');
for(i=0 ;i<DIM;++i)
 printf("%c ",arr[i]);

return 0;
}