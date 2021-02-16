#include <stdio.h>
#define DIM 5
int maior_pos(int arr[], int dim){
int i,maior=arr[0],pos;
for(i=1; i<dim;++i)
 if(arr[i]>=maior){
  maior=arr[i];
  pos=i;
 }
return pos;
}




int main(){
int arr[DIM]={1,2,8,8,7};
printf("%d",maior_pos(arr,DIM));


return 0;
}