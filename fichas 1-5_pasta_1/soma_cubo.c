#include <stdio.h>

int cubo(int num){
return num*num*num;
}

int entre(){
int num;
do{
    printf("Digite um numero ");
    scanf("%d",&num)==0;
 }while(num<100 || num>999);
return num;
}

int soma_cubo(int num){
int soma=0,orig;
orig=num;
for(; num>0; num/=10)
    soma+=cubo(num%10);
return soma==orig ? 1 : 0;
}




int main(){
int num;
char c;
do{
   num=entre();
    if(soma_cubo(num)==1)
    printf("O num %d e igual a soma do cubo dos seus digitos\n",num);
    fflush(stdin);
    printf("s para sair");
    scanf("%c",&c);
}while(c!='s');

return 0;
}