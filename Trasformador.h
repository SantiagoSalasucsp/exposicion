#ifndef __TRANSFORMADOR_H__
#define __TRANSFORMADOR_H__
#include <iostream>
#include <string>
using namespace std;


class Transformador{

private:
    int NotaInicial;
    int transformador;
    string*arr;
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



public:
    Transformador(string*no,int, int);

    void Transformar();
    void saltos(int& , int);
    void saltosiz(int& , int);
    void verificar(int&,int);
    void verif(int&,int);
    void derecha(int&, int, int&);
    void izquierda(int&, int&, int);
    
};
#endif
