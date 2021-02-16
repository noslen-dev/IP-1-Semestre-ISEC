#include <stdio.h>
float square(float num){

return num*num;

}



int main(){
float num;
do{
    printf("Digite um numero ");
    scanf("%f",&num);
    if(num==0)
     break;
    printf("%.2f\n",square(num));
}while(1);




return 0;
}