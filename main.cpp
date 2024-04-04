#include <iostream>
#include "Dias.h"
int main() {
    Dias fecha1(3, 1, 2020);
    Dias fecha2(15, 14, 2019);
    Dias fecha3(20, 12, 1500);

    std::cout << "Fecha 1: ";
    fecha1.displayDate();
    fecha1.isleapYear();
    fecha1.validar();

    std::cout << "Fecha 2: ";
    fecha2.displayDate();
    fecha2.isleapYear();
    fecha2.validar();

    std::cout << "Fecha 3: ";
    fecha3.displayDate();
    fecha3.isleapYear();
    fecha3.validar();
}