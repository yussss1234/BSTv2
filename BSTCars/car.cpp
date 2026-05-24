#include "car.h"

Car::Car(){

    targa = "";
    modello = "";
    numPosti = 0;
    dataImmatricolazione = "";
    valoreEuro = 0.0;

}

Car::Car(string t, string m, int p, string d, double v){

    targa = t;
    modello = m;
    numPosti = p;
    dataImmatricolazione = d;
    valoreEuro = v;

}

string Car::getTarga(){

    return targa;

}

string Car::getModello(){

    return modello;

}

int Car::getNumPosti(){

    return numPosti;

}

string Car::getDataImmatricolazione(){

    return dataImmatricolazione;

}

double Car::getValoreEuro(){

    return valoreEuro;

}

void Car::setValoreEuro(double v){

    valoreEuro = v;

}
