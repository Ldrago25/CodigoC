#include <iostream>
#include <string.h>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;


class Persona
{
    int edad;
    char nombre[50];
    public:
    Persona(){this->edad=12; strcpy(nombre,"Brandon");}
    Persona(int a,char *c){this->edad=a; strcpy(this->nombre,c);}
    friend ostream & operator<<(ostream &print,const Persona &data)
    {
        print<<"Nombre: "<<data.nombre<<" Edad: "<<data.edad<<endl;
        return print;
    }

};

Persona data(char *have)
{
    char *check;
    check=strtok(have,",");
    int a=atoi(check);
    check=strtok(NULL,",");
    char name[50];
    strcpy(name,check);
    Persona person(a,name);
    return person;
}


int main()
{
    char datos[100]="20,Brandon";
    Persona person1=data(datos);
    cout<<person1<<endl;
    return 0;
}
