#include <iostream>
#include <string>
#include "Estructuras.h"
using namespace std;


Estructuras::Estructuras(string* no,int posi,int tama){
  notas=no;
  pos=posi;
  tam=tama;
}

void Estructuras::tono(int &x){
  x+=2;
  
};
void Estructuras::semitono(int &y){
y+=1;
};


void Estructuras::print() {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << notas[i] << " ";
    cout << "]" <<endl;
}
void Estructuras::EscalaMayor(){
  int k=pos;
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[pos]<<endl;

};


void EscalaMenor(){
  int k=pos;
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[pos]<<endl;

  }

void doricar(){
  int k=pos;
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[pos]<<endl;
 
}

void frigia(){
  int k=pos;
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[pos]<<endl;
}

void lidia(){
  int k=pos;
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[pos]<<endl;
}

void lidiaAumentada(){
  int k=pos;
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[k]<<endl;
  tono(k);
  cout<<notas[k]<<endl;
  semitono(k);
  cout<<notas[pos]<<endl;

}

void cromatica(){
for(int i=0;i<=12;i++)
  cout<<notas[i];}

