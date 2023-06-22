//
// Created by mbermejo on 22/06/2023.
//

#ifndef P2_UANALISTA_H
#define P2_UANALISTA_H

#include <iostream>
#include <string>
using namespace std;

class  CAnalista
{
protected:
    string nombre;
    double sb;
    int he;
    double txhe;
public:
    CAnalista(){}
    CAnalista(string _nombre, double _sb, int _he, double _txhe):nombre(_nombre), sb(_sb), he(_he), txhe(_txhe){}
    virtual ~CAnalista() {}
    double sueldoNeto();
    virtual double bonificacion()=0;
    virtual double descuento()=0;
    //--------metodos de acceso
    string getNombre(){ return nombre;}
    double getSb(){return sb;}
    int getHe() {return he;}
    double getTxhe(){return txhe; }
};



class CASenior : public CAnalista
{
private:
    int  na;
    double pxa;
public:
    CASenior() {};
    CASenior(string _nombre, double _sb, int _he, double _txhe,  int _na, double _pxa): CAnalista(_nombre, _sb, _he, _txhe)
    {
        na = _na;
        pxa = _pxa;
    }
    virtual ~CASenior() {};
    double bonificacion() override;
    double descuento() override;
};


class CAJunior: public CAnalista
{
public:
    CAJunior() {}
    CAJunior( string _nombre, double _sb, int  _he, double _txhe): CAnalista(_nombre, _sb, _he,_txhe){}
    virtual ~CAJunior() {}
    double bonificacion() override;
    double descuento() override;
};


#endif //P2_UANALISTA_H



