#include <stdio.h>
int maior(int size){
int num,max_num,cnt=0;
scanf("%d",&num);
max_num=num;
for(int i=1 ; i<size; ++i){
 scanf("%d",&num);
 if(num==max_num)
  ++cnt;
if(num>max_num){
 max_num=num;
 cnt=1;
}
}
return cnt;
}

int main(){
printf("%d",maior(5));


return 0;
}