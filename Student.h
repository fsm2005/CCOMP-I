#include<string>

class Student{
public:
explicit Student(std::string n ,int a):name{n},age{a} {
}



bool isOlder()const{
    if (age >=18){
        return true;
    }
    else
        return false;
}

int getAge()const{
return age;
}

std::string getName()const{
return name;
}

void setAge(int a){
age = a;
}

void setName(std::string n){
name = n;
}

private:
std::string name;
int age;

};