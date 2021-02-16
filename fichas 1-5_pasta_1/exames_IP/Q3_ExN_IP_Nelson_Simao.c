////////////// Exame época normal 09/02/2021 /////////////////
/////////////////////// Questão 3 ////////////////////////////
//Nome:Nelson Simão
//Nº estudante:a2020132648

// Estratégia de resolução:
// 1-Encontrar o tamanho da palavra para assegurar que i nao passa os limites da string
// 2-Fazer um ciclo for em que i começa no 1º indice e cnt='0'
// 3-Se encontrarmos um carater diferente de espaço é porque encontramos o primeiro carater de uma palavra
// assim substituimos esse primeiro carater pelo carater cnt, que vai ser incrementado apos esta atribuição
// o segundo for de seguida vai saltar essa palavra e vai se posicionar no carater terminador ou no proximo
// espaço em branco
// O ciclo repete-se ate i>len
// 4-Apos isto tudo o ultimo for usa o cnt para contar quantos carateres diferentes de espaço existem
// na string e esse valor e devolvido

#define TAM 100
#include <stdio.h>
int primLetra(char fr1[]){
int i,len,cnt;
for(len=0; fr1[len]!='\0';++len);
for(i=0,cnt='0'; i<len ;++i)
  if(fr1[i]!=' '){
    fr1[i]=cnt++;
    for(; fr1[i]!='\0' && fr1[i]!=' ';++i);
  }
for(cnt=i=0; fr1[i]!='\0';++i)
  if(fr1[i]!=' ')
    ++cnt;
return cnt;
}

