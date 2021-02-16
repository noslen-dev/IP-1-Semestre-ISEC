#include <stdio.h>
#define L 10
#define C 3

int main(){
int arr[L][C]; 
int i,j,cnt=0;
for(i=0; i<L;++i){
  do{
      printf("Digite um numero entre 0 e 100: ");
      scanf("%d",&arr[i][0]);
  }while(arr[i][0]<1 || arr[i][0]>100);
  arr[i][1]=arr[i][0]*arr[i][0];
  arr[i][2]=arr[i][0]*arr[i][1];
}
for(i=0; i<L;++i){
  for(j=0;j<C;++j)
    printf("%d ",arr[i][j]);
    if(arr[i][j]>1000)
     ++cnt;
  putchar('\n');
}
printf("\nExistem %d numeros superiores a 1000",cnt);


return 0;
}