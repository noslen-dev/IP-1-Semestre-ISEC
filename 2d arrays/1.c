#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#define NC 10
#define NL 10




int main(){
int i,j,arr[NC][NL],cnt=0;
srand(time(0));
for(i=0; i<NC;++i)
  for(j=0; j<NC ;++j){
    arr[i][j]=rand()%11;
    if(arr[i][j]==0)
      ++cnt;
  }
for(i=0; i<NC;++i){
  for(j=0;j<NC;++j)
    printf("%5d ",arr[i][j]);
  putchar('\n');
}
printf("\nExistem %d zeros",cnt);
return 0;
}