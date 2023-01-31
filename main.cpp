#include <iostream>
#include <string>
#include "Estructuras.h"
using namespace std;

int main() {
  int i;
 string notas[]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};



  
  
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

//EscalaMayor(notas,7);
//cout<<endl;
//EscalaMenor(notas,4);
string* nota;
nota=notas;
Estructuras e1(nota,0,24);

e1.EscalaMayor();
}
