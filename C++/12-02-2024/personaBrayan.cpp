#include <iostream>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    //Constructor
    Persona(string _nombre, int _edad) {
        nombre = _nombre;
        edad = _edad;
    }
    ~Persona() {
        cout << "Destruyendo a " << nombre << endl;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }
};

void inscribir(Persona *p) {
    cout << "Inscribiendo a " << p->getNombre() << " de " << p->getEdad() << " años" << endl;
}

int main() {
    Persona *brayan = new Persona("Brayan Vazquez", 20);
    inscribir(brayan);

    delete brayan;
    return 0;
}