/*
* Proyecto A01703350 clase Escuela
* Alan Fernando Razo Peña
* A01703350
* 21/05/2021
* Esta clase Escuela contiene todas las operaciones para hacer altas de información para profesores, alumnos y familiares asi como proporcionar info de la escuela, y es utilizada por la función main del programa, parte del proyecto A01703350.
*/
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
        int opcion;
        bool repetir = true;
        do {
        // Texto del menú que se verá cada vez
        cout << "\n\n¿Que tipo de miembros desea ver?" << endl;
        cout << "1. Alumnos" << endl;
        cout << "2. Profesores" << endl;
        cout << "3. Familiares" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
 
                cout << "\n" << endl;               
                mie[0]->mostrar();
                cout << "\n" << endl;
                mie[1]->mostrar();
                cout << "\n" << endl;
                system("pause>nul"); // Pausa
                break;
                
            case 2:

                cout << "\n" << endl;              
                mie[2]->mostrar();
                cout << "\n" << endl;
                mie[3]->mostrar();
                cout << "\n" << endl;
                system("pause>nul"); // Pausa
                break;
                
            case 3:

                cout << "\n" << endl;              
                mie[4]->mostrar();
                cout << "\n" << endl;
                mie[5]->mostrar();
                cout << "\n" << endl;
                system("pause>nul"); // Pausa            
                break;
                
            case 0:
            	repetir = false;
            	break;
            }        
         } while (repetir);
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
  cout << "Bienvenido a la base de datos, por favor registre su información" << endl;
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
  cout << "\n";
  cout << "Su escuela es " << getNombre() << endl;
  cout << "Esta ubicada en " << getDireccion() << endl;
  cout << "Número " << getNumero() << endl;
  cout << "En la ciudad de " << getCiudad() << endl;
  cout << "Del país " << getPais() << endl;
  cout << "\n";
  cout << "A continucación se muestran miembros de la comunidad con sus respectivos datos dependiendo de su jerarquía" << endl;
  cout << "\n";

}

};
#endif /*ESCUELA_H*/
