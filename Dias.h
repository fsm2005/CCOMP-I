#include <iostream>
class Dias {
public:
    Dias(int mes, int dia, int año) : m(mes), d(dia), a(año) {
        if (mes >= 12 || mes < 1) {
            m = 1;
        }
        if (año <= 1900 || año >= 2050) {
            a = 1900;
        }
    }

bool isleapYear() const {
    if((a % 4 == 0 && a % 100 != 0 ) || a % 400 == 0) {
        
        std::cout << "Es bisiesto" << std::endl;
        return true;
      
    } else {
        
        std::cout << "No es bisiesto" << std::endl;
        return false;
    }
}

    void setMes(int mes) {
        if (mes >= 12 || mes < 1){
            m = mes;
        }
    
      }
bool validar() const {
    if (m == 6 || m == 4 || m == 9 || m == 11) {
        if (d > 30) {
          std::cout << "es exacto" << std::endl;
            return true;
        }
    }
  std::cout << "no es exacto" << std::endl;
    return false;
}
    void setDia(int dia) {
        d = dia;
    }

    void setAño(int año) {
        a = año;
    }

    int getMes() const {
        return m;
    }

    int getDia() const {
        return d;
    }

    int getAño() const {
        return a;
    }

    void displayDate() const {
        std::cout << m << "/" << d << "/" << a << std::endl;
    }

private:
    int m;
    int d;
    int a;
};