#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class ClaseTransporte
{
    protected:
    int distRecorrida = 0;
    int estadoOnOff = 0;
    char* color;
    char* nombre;

    public:
    virtual void desplazar(int x) //El transporte recorre distancia
    {
        distRecorrida = distRecorrida + x;
        cout<<"Cantidad distancia recorrida = "<<distRecorrida<<endl;
    }
    virtual void estadoCambio() //El transporte se enciende o apaga
    {
        switch (estadoOnOff)
        {
        case 0:
            estadoOnOff = 1;
            cout<<"El auto esta ahora encendido\n";
            break;
        
        default:
            estadoOnOff = 0;
            cout<<"El auto ahora esta apagado\n";
            break;
        }
    }
};

class Terrestre : public ClaseTransporte
{
    private:
    int numRuedas = 4;

    public:
    void desplazar(int x) override {
        distRecorrida++;
        cout<<"El auto se desplazo "<<x<<" unidades"<<endl;
    }
};

int main()
{
    Terrestre Carro;
    Carro.estadoCambio();
    Carro.desplazar(12);
    Carro.desplazar(23);
    Carro.estadoCambio();

    cout<<"\nFin\n";

    getchar();
    return 0;
}
