/////////////// Questão 2 do Exame da Época Normal de IP /////////////// 
// Nome: Nelson Forte Simão
// Nr. Estudante: a2020132648
float InsereNovaTemperatura (float tempmin[], float tempmax[], int dim, float nova_tmin, float nova_tmax, int pos){
int i;
if(nova_tmin>nova_tmax || pos>=dim || nova_tmin<-90.0 || nova_tmin>90.0 || nova_tmax<-90.0 || nova_tmax>90.0)
  return -1;
for(i=0; i<pos; ++i)
  tempmin[i]=tempmin[i+1];
tempmin[pos]=nova_tmin;
for(i=0; i<pos; ++i)
  tempmax[i]=tempmax[i+1];
tempmax[pos]=nova_tmax;
return nova_tmax-nova_tmin;
}


