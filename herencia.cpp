#ifndef __TRANSFORMADOR_H__
#define __TRANSFORMADOR_H__
#include <iostream>
#include <string>
#include "Estructuras.h"
using namespace std;


class Transformador:public Estructuras{
    private:
        int transformador ;

    public:

    Transformador(string* nota,int ,int ,int);

    void Transformar();
    void saltos(int& , int);
    void saltosiz(int& , int);
    void verificar(int&,int);
    void verif(int&,int);
    void derecha(int&, int, int&);
    void izquierda(int&, int&, int);
};
#endif
Transformador::Transformador(string* nota,int posi,int tama, int tran): Estructuras( nota, posi, tama){
    transformador = tran;
}



void Transformador::saltos(int &x,int y){
        x=x+y;
    }

    void Transformador::saltosiz(int &e, int j){
        e=e-j;
    }

  
  void Transformador::verificar(int &x,int y){
    if((x+y)>11)
        {x=x-12;}
    
  }
  void Transformador::verif(int&p,int u){
    if(p-u<0){
        p=p+12;
    }
  }


  void Transformador::derecha(int &k, int x, int &y){
    k=0;
    if(y<x){
        y=y+12;

    k=y-x;}
    else{
        k=y-x;
    }
   
  }
  void Transformador::izquierda(int &k, int &x, int y){
    k=0;
    if(x<y){
        x=x+12;
    k= x-y;}
    else{
        k=x-y;
    }
    
  }



void Transformador::Transformar(){
    int derecha_;
    int izquierda_;
    int h;
    int l=0;
    int o=0;

    int j=pos;
    int p=transformador;



    
    derecha(l,j,p);
    derecha_=l;

    izquierda(o,pos,transformador);
    izquierda_=o;



    
    if(derecha_<0){
        derecha_=derecha_*(-1);}
    cout<<"derecha:"<<derecha_<<endl;

    if(izquierda_<0){
        izquierda_=izquierda_*(-1);}
    cout<<"izquierda:"<<izquierda_<<endl;
    
    
    
        

    

    if (derecha_<=izquierda_){
        h=derecha_;
        cout<<"derecha"<<endl;
        cout<<h<<endl;
        
        verificar(Do,derecha_);
        saltos(Do,derecha_);
        cout<<"Do"<<"------"<<notas[Do]<<endl;

        verificar(Re,derecha_);
        saltos(Re,derecha_);
        cout<<"Re"<<"------"<<notas[Re]<<endl;

        verificar(Mi,derecha_);
        saltos(Mi,derecha_);       
        cout<<"MI"<<"------"<<notas[Mi]<<endl;

        verificar(Fa,derecha_);
        saltos(Fa,derecha_);
        cout<<"Fa"<<"------"<<notas[Fa]<<endl;

        verificar(Sol,derecha_);
        saltos(Sol,derecha_);
        cout<<"Sol"<<"-----"<<notas[Sol]<<endl;

        verificar(La,derecha_);
        saltos(La,derecha_);
        cout<<"La"<<"------"<<notas[La]<<endl;

        verificar(Si,derecha_);
        saltos(Si,derecha_);
        cout<<"Si"<<"------"<<notas[Si]<<endl;
        

        
        
        }
    else {
        h=izquierda_;
        cout<<"izquierda"<<endl;
        cout<<h<<endl;

        verif(Do,izquierda_);
        saltosiz(Do,izquierda_);
        cout<<"Do"<<"-----"<<notas[Do]<<endl;

        verif(Re,izquierda_);
        saltosiz(Re,izquierda_);
        cout<<"Re"<<"-----"<<notas[Re]<<endl;

        verif(Mi,izquierda_);
        saltosiz(Mi,izquierda_);
        cout<<"MI"<<"-----"<<notas[Mi]<<endl;

        verif(Fa,izquierda_);
        saltosiz(Fa,izquierda_);
        cout<<"Fa"<<"-----"<<notas[Fa]<<endl;

        verif(Sol,izquierda_);
        saltosiz(Sol,izquierda_);
        cout<<"Sol"<<"-----"<<notas[Sol]<<endl;

        verif(La,izquierda_);
        saltosiz(La,izquierda_);
        cout<<"La"<<"-----"<<notas[La]<<endl;

        verif(Si,izquierda_);
        saltosiz(Si,izquierda_);
        cout<<"Si"<<"-----"<<notas[Si]<<endl;
        
                

        

    }
    


}
