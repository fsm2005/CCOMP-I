#include <iostream>
using namespace std;
#include "Student.h"
int main() {
  Student es1{"juan Perez",12};
  cout<<"introdusca su nombre: ";
  string estu;
  getline(cin,estu);
  es1.setName(estu);
    cout<<"introdusca su edad: ";
  int edad;
  cin>>edad;
  es1.setAge(edad);
 
 cout<<"muy bien su edad es: "<< es1.getAge()<< endl;
  
 cout<<"muy bien su nombre es: "<< es1.getName()<< endl;;
  
 if (es1.isOlder() ==true ) {
   cout <<"es mayor de edad"; 
 }
 else 
 cout<<"es menor de edad";

}
