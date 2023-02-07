#include <iostream>
#include <string>
#include "Transportar.h"
using namespace std;

Transformador::Transformador(string*no,int x,int y){
    arr=no;
    NotaInicial=x;
    /*if(trasformador==11){
    trasformador=y;}
    else
    trasformador=y+1;
    }*/
    transformador=y;}

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

    int j=NotaInicial;
    int p=transformador;



    
    derecha(l,j,p);
    derecha_=l;

    izquierda(o,NotaInicial,transformador);
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
        cout<<"Do"<<"------"<<arr[Do]<<endl;

        verificar(Re,derecha_);
        saltos(Re,derecha_);
        cout<<"Re"<<"------"<<arr[Re]<<endl;

        verificar(Mi,derecha_);
        saltos(Mi,derecha_);       
        cout<<"MI"<<"------"<<arr[Mi]<<endl;

        verificar(Fa,derecha_);
        saltos(Fa,derecha_);
        cout<<"Fa"<<"------"<<arr[Fa]<<endl;

        verificar(Sol,derecha_);
        saltos(Sol,derecha_);
        cout<<"Sol"<<"-----"<<arr[Sol]<<endl;

        verificar(La,derecha_);
        saltos(La,derecha_);
        cout<<"La"<<"------"<<arr[La]<<endl;

        verificar(Si,derecha_);
        saltos(Si,derecha_);
        cout<<"Si"<<"------"<<arr[Si]<<endl;
        

        
        
        }
    else {
        h=izquierda_;
        cout<<"izquierda"<<endl;
        cout<<h<<endl;

        verif(Do,izquierda_);
        saltosiz(Do,izquierda_);
        cout<<"Do"<<"-----"<<arr[Do]<<endl;

        verif(Re,izquierda_);
        saltosiz(Re,izquierda_);
        cout<<"Re"<<"-----"<<arr[Re]<<endl;

        verif(Mi,izquierda_);
        saltosiz(Mi,izquierda_);
        cout<<"MI"<<"-----"<<arr[Mi]<<endl;

        verif(Fa,izquierda_);
        saltosiz(Fa,izquierda_);
        cout<<"Fa"<<"-----"<<arr[Fa]<<endl;

        verif(Sol,izquierda_);
        saltosiz(Sol,izquierda_);
        cout<<"Sol"<<"-----"<<arr[Sol]<<endl;

        verif(La,izquierda_);
        saltosiz(La,izquierda_);
        cout<<"La"<<"-----"<<arr[La]<<endl;

        verif(Si,izquierda_);
        saltosiz(Si,izquierda_);
        cout<<"Si"<<"-----"<<arr[Si]<<endl;
        
                

        

    }
    


}
