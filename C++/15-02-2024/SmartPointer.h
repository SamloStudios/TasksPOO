#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#include "../15-02-2024/ReferenceCounter.h"

class SmartPointer {
public:
    char* ptr = nullptr;
    ReferenceCount* referenceCount = nullptr;
}




#endif SMARTPOINTER_SMARTPOINTER_H;


//Sobrecarga de operadores es cuando se le da mas funciones personalizadas a los operadores