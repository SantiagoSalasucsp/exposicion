#include <iostream>
#include <string>
#include "acordes.h"
using namespace std;


acordes::acordes(string* no,int posi,int tama){
  notas=no;
  pos=posi;
  tam=tama;
}

void acordes::acordeMayor(){
  int k=pos;
  cout<<notas[k]<<endl;
  tono(k);
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  semitono(k);
  cout<<notas[k]<<endl;
  
}
