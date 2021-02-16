#include<stdio.h>

int main(){
int idade,tipo;
printf("Digite a idade e o tipo do carro ");
scanf("%d%d",&idade,&tipo);
switch(tipo){
    case 1:
     if(idade>=5)
      printf("25 euros de imposto");
     else
      printf("45 euros de imposto");
     break;
    case 2:
     if(idade>=5)
      printf("50 euros de imposto");
     else
      printf("125 euros de imposto");
     break;
    case 3:
     if(idade>=5)
      printf("75 euros de imposto");
     else
      printf("150 euros de imposto");
     break;
    case 4:
     if(idade>=5)
      printf("150 euros de imposto");
     else
      printf("250 euros de imposto");
     break;    
}



return 0;
}