//
// Proyecto A01703350 clase Escuela
// Alan Fernando Razo Peña
// A01703350
// 21/05/2021
// Esta clase Escuela contiene todas las operaciones para hacer altas de información para la escuela, y es utilizada por la función main del programa, parte del proyecto A01703350.
//
#ifndef ESCUELA_H
#define ESCUELA_H

#include <iostream>
#include <sstream>
#include "Miembro.h" //biblioteca con los objetos que se van a usar

using namespace std;

const int MAX=1000;

class Escuela {

    //Declarar variables privadas(atributos)
    private:
        string nombre;
        string direccion;
        string numero;
        string ciudad;
        string pais;
        Miembro* mie[MAX];
        int persona;
    //Declaro constructor por default y metodos públicos.
    public:

    
      Escuela(): persona(0) {}; //constructor por defualt

      void crea_ejemplos() {
        //new crea el objeto en tiempo de ejecución para usar polimorfismo
        mie[persona]=new Alumno(persona,"Alan","alanrazo2000@hotmail.com","A01703350", 90.5);
        persona++;
        mie[persona]=new Alumno(persona,"Arturo","arturo@hotmail.com","A017037645", 95.7);
        persona++;
        mie[persona]=new Profesor(persona,"Anna","soyana@hotmail.com","Artes visuales");
        persona++;
        mie[persona]=new Profesor(persona,"Andrea","andyyy@hotmail.com","Filosofía");
        persona++;
        mie[persona]=new Familiar(persona,"Alejandro","alex99@hotmail.com","Padre", 50);
        persona++;
        mie[persona]=new Familiar(persona,"Ariel","lasirenita@hotmail.com","Madre", 45);
        persona++;
      }
      void muestra_miembros() {
        for (int i = 0; i < persona; i++)
        mie[i]->mostrar();
        cout << "\n" << endl;
      }

string getNombre(){
  return nombre;
}
string getDireccion(){
  return direccion;
}
string getNumero(){
  return numero;
}
string getCiudad(){
  return ciudad;
}
string getPais(){
  return pais;
}
void setNombre(string _nombre){
  nombre=_nombre;
}
void setDireccion(string _direccion){
  direccion=_direccion;
}
void setNumero(string _numero){
  numero=_numero;
}
void setCiudad(string _ciudad){
  ciudad=_ciudad;
}
void setPais(string _pais){
  pais=_pais;
}

void registrarInfo(){
  string nombre;
  string direccion;
  string numero;
  string ciudad;
  string pais;
  cout << "Nombre de la escuela: " << endl;
  getline(cin, nombre);
  setNombre(nombre);
  cout << "Dirección de la escuela: " << endl;
  getline(cin, direccion);
  setDireccion(direccion);
  cout << "Número exterior: " << endl;
  getline(cin, numero);
  setNumero(numero);
  cout << "Ciudad: " << endl;
  getline(cin, ciudad);
  setCiudad(ciudad);
  cout << "Pais: " << endl;
  getline(cin, pais);
  setPais(pais);
}

void imprimeInfo(){
  cout << "Bienvenidos a " << getNombre() << endl;
  cout << "Ubicada en " << getDireccion() << endl;
  cout << "Número: " << getNumero() << endl;
  cout << "En la ciudad de: " << getCiudad() << endl;
  cout << "Del país: " << getPais() << endl;
}

};
#endif /*ESCUELA_H*/
