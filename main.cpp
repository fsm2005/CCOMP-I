#include <iostream>
 #include"persona.h"
using namespace std;
#include <algorithm>

bool compareByEdad(const persona& a, const persona& b) {
	return a.getEdad() < b.getEdad();
}

bool compareByNombre(const persona& a, const persona& b) {
	return a.getNombre() < b.getNombre();
}

int main() {
	persona* p1 = new persona[10]{ {"jose", 12},{"maria",14} ,{"pablo", 12},{"carlos", 11},{"pedro", 13},{"ramon", 16},{"kasndra", 17},{"cristofer", 14},{"mariajose", 15 }, { "josemaria", 18 }
};
	persona* ptr = p1 + 9;
	for (;ptr >= p1;ptr--) {
		std::cout << ptr->getNombre() << " " << ptr->getEdad()<< endl;
	}

	//persona* ptr = r + 9;
	//for (persona* ptr;ptr >= r;ptr--) {
		//std::cout << nombre << " " << edad ;
	//}

	cout << "INDICE IMPAR: " << endl;

	for (int i = 0; i <= 10; i++) {

		if (i % 2!=0) {
			cout <<(p1 + i)->getNombre() << " " << (p1 + i)->getEdad()<< endl;
		}
	}
//		persona* ptr = r + 9;
//		int cont = 0;
//		for (persona* ptr;ptr >= r;ptr--) {
//			if (r[cont] % 2) {
//				std::cout << nombre << " " << edad << ;
//			}
//		}
	cout << "Funcion  print : " << endl;
	persona temp("", 0);

	temp.print(p1, 10);

	std::sort(p1, p1 + 10, compareByEdad);
	cout << "ORDEN EDAD: " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << p1[i].getNombre() << " " << p1[i].getEdad() << endl;
	}


	std::sort(p1, p1 + 10, compareByNombre);
	cout << "ORDEN NOMBRE : " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << p1[i].getNombre() << " " << p1[i].getEdad() << endl;
	}

	delete[]p1;
}