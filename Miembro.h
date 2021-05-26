//
// Proyecto A01703350 clase Miembro y heredadas
// Alan Fernando Razo Peña
// A01703350
// 21/05/2021
// La clase Miembro contiene todas las operaciones relacionadas con la información para el profesor, alumno y familiar es utilizada por la función main del programa, parte del proyecto A01703350.
//
#ifndef MIEMBRO_H
#define MIEMBRO_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Miembro{
  private: //Atributos
    int id;
    string nombre;
    string email;  
  public: //Metodos
    Miembro(int, string, string); //Constructor
    virtual void mostrar();
};

class Alumno: public Miembro{
  private: //Atributos
    string matricula;
    float calif;
  public: //Metodos
    Alumno(int, string, string, string, float); //Constructor de la clase alumno
    void mostrar();  

};

class Profesor: public Miembro{
  private: //Atributos
    string materia;
  public: //Metodos
    Profesor(int, string, string, string); //Constructor de la clase alumno
    void mostrar();  

};

class Familiar: public Miembro{
  private: //Atributos
    string sujeto;
    int edad;
  public: //Metodos
    Familiar(int, string, string, string, int); //Constructor de la clase alumno
    void mostrar();  

};

//Constructor de la clase Miembro (padre)
Miembro::Miembro(int _id, string _nombre, string _email){
  id=_id;
  nombre=_nombre;
  email=_email;
}

Alumno::Alumno(int _id, string _nombre, string _email, string _matricula, float _calif): Miembro(_id,_nombre,_email){
  matricula=_matricula;
  calif=_calif;
}

Profesor::Profesor(int _id, string _nombre, string _email, string _materia): Miembro(_id,_nombre,_email){
  materia=_materia;
}

Familiar::Familiar(int _id, string _nombre, string _email, string _sujeto, int _edad): Miembro(_id,_nombre,_email){
  sujeto=_sujeto;
  edad=_edad;
}

void Miembro::mostrar(){
  cout << "Su id es: " << id << endl;
  cout << "Su nombre es: " << nombre << endl;
  cout << "Su correo electrónico es: " << email << endl;
}

void Alumno::mostrar(){
  Miembro::mostrar();
  cout << "Su matricula es: " << matricula << endl;
  cout << "Su calificación es: " << calif << endl;
}

void Profesor::mostrar(){
  Miembro::mostrar();
  cout << "Su materia es: " << materia << endl;
}

void Familiar::mostrar(){
  Miembro::mostrar();
  cout << "El familiar es su: " << sujeto << endl;
  cout << "El familiar tiene: " << edad << " años" << endl;
}
#endif /*MIEMBRO_H*/
