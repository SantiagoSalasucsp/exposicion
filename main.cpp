#include <iostream>
#include <string>
#include "Estructuras.h"
#include "Transformador.h"
using namespace std;

int main() {
  int z;
  int Do=0;
  int Reb=1;
  int Re=2;
  int Mib=3;
  int Mi=4;
  int Fa=5;
  int Solb=6;
  int Sol=7;
  int Lab=8;
  int La=9;
  int Sib=10;
  int Si=11;

//string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
 string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
//EscalaMayor(notas,7);
//cout<<endl;
//EscalaMenor(notas,4);
string* nota;
nota=notas;
Estructuras L(notas,Mi,11);
Estructuras D(notas,Sol,11);
Estructuras j(notas,Do,11);

L.EscalaMenor();
D.EscalaMayor();



/*Transformador r3(notas,Sib,Fa);
r3.Transformar();*/








}
