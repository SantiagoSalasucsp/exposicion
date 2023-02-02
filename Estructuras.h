#include <iostream>
#include <string>
using namespace std;

class Estructuras{
public:


  Estructuras(string* nota,int posi,int tama);

  void derecha(int&);
  void tono (int&);
  void semitono(int&);
  void EscalaMayor();
  void print();
  void EscalaMenor();
  void intervalos();
  void Conversor();
  void dorica();
  void frigia();
  void Cromatica();
  void lidia();
  void lidiaAumentada();
  void PentatonicaMenor();

protected:
  string*notas;
  //[]=      {"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si","Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};
  int pos;
  int tam=11;



};
