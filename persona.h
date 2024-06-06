#pragma once
#include <iostream>
#include<string>


class persona {
protected:
	std::string nombre;
	int edad;
public:
	persona(std::string n, int e) :nombre(n), edad(e) {}
	std::string getNombre()const {
		return nombre;
	}
	void setNombre(std::string n) {
		nombre = n;
	}
	int getEdad()const {
		return edad;
	}
	void setEdad(int e) {
		edad = e;
	}
	void print(persona* r, int tamaño) const {
		persona* ptr = r ; 
		for (int i = 0; i < tamaño; ++i, ++ptr) {
			std::cout << ptr->getNombre() << " " << ptr->getEdad() << "\n";
		}
	}    

};