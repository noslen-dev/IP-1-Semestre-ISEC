#include <stdio.h>
#define DIM 3

int main(){
int arr[DIM][DIM],i,j;
printf("Digite os elementos da matriz");
for(i=0; i<DIM ;++i)
 for(j=0; j<DIM ;++j){
  printf("Elemento [%d][%d] ",i,j);
  scanf("%d",&arr[i][j]);
 }

for(i=0; i<DIM ;++i){
 for(j=0; j<DIM ;++j)
   printf("%d ",arr[i][j]);
 putchar('\n');
}


return 0;
}