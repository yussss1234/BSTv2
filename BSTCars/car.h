#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car{

    private:
        string targa;
        string modello;
        int numPosti;
        string dataImmatricolazione;
        double valoreEuro;

    public:
        Car();
        Car(string t, string m, int p, string d, double v);

        string getTarga();
        string getModello();
        int getNumPosti();
        string getDataImmatricolazione();
        double getValoreEuro();

        void setValoreEuro(double v);

};

#endif // CAR_H
