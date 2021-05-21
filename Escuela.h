//
// Proyecto A01703350 clase Escuela
// Alan Fernando Razo Peña
// A01703350
// 21/05/2021
// Esta clase Escuela contiene todas las operaciones para hacer altas de información para grupos, alumnos y asignaturas, y es utilizada por la función main del programa, parte del proyecto A01703350.
//

#ifndef ESCUELA_H
#define ESCUELA_H

#include <string>
#include <iostream>
#include <sstream>
#include "Docente.h" //biblioteca con los objetos que se van a usar

using namespace std;

class Escuela {

    //Declarar variables privadas(atributos)
    private:
        int agregarDatos;
    //Declaro constructor por default y metodos públicos.
    public:
    Escuela(){
      this -> agregarDatos = 0;
    }
    int get_agregarDatos(){
        return this -> agregarDatos;
    }
    void set_agregarDatos(int _agregarDatos){
        this -> agregarDatos = _agregarDatos;
    }
    void ingresaInfo(){
        int verificar;
        cout << "Ingrese la sección a la que quiera acceder del sistema" << endl;
        cout << "1.Grupos  2. Alumnos 3. Asignaturas" << endl;
        cin >> verificar;
        if (verificar == 1){
          int ingresaGrupo;
          int verificarImpresion;
          cout << "¿Cuántos grupos quiere ingresar al sistema?" << endl;
          cin >> ingresaGrupo
          Docente *Grupos[ingresaGrupo];
          for (int i=0;i<ingresaGrupo;i++){
            int integrantes;
            string nombre;
            int salon;
            cout << "¿Cuantos integrantes hay en el salón?" << endl;
            cin >> integrantes;
            cout << "¿Cuál es el nombre del salón?" << endl;
            cin >> nombre;
            cout << "¿Qué número de salón es?" << endl;
            cin >> salon;
            Grupos[i] = new Grupos(integrantes, nombre, salon);
          }
          cout << "¿Quiere imprimir su información?   1. SI  2. NO" << endl;
          cin >> verificarImpresion;
          if (verificarImpresion == 1){
            for (int i = 0; i<ingresaGrupo;i++){
              Grupos[i]->mostrar();
              cout << "\n" << endl;
            }
          }
          else{
            cout << "Invalidando datos registrados" << endl;
            }
        }
        else if (verificar == 2){
          int ingresaAlumno;
          int verificarImpresion;
          cout << "¿Cuántos alumnos quiere ingresar al sistema?" << endl;
          cin >> ingresaAlumno;
          Docente *Alumnos[ingresaAlumno];
          for (int i=0;i<ingresaAlumno;i++){
            int id;
            int matricula;
            string nombre;
            string email;
            int edad;
            cout << "¿Cuál es el id del estudiante?" << endl;
            cin >> id;
            cout << "¿Cuál es la matricula del estudiante?" << endl;
            cin >> matricula;
            cout << "¿Cuál es el nombre del estudiante?" << endl;
            cin >> nombre;
            cout << "¿Cuál es la edad del estudiante?" << endl;
            cin >> edad;
            cout << "¿Cuál es su email del estudiante?" << endl;
            cin >> email;
            Alumnos[i] = new Alumnos(id, matricula, nombre, edad, email);
          }
          cout << "¿Quiere imprimir su información?   1. SI  2. NO" << endl;
          cin >> verificarImpresion;
          if (verificarImpresion == 1){
            for (int i = 2; i<ingresaAlumno;i++){
              Alumnos[i]->mostrar();
              cout << "\n" << endl;
            }
          else{
            cout << "Invalidando datos registrados" << endl;
             }
          }
          else if (verificar == 3){
          int ingresaAsignatura;
          int verificarImpresion;
          cout << "¿Cuántas asignaturas quiere ingresar al sistema?" << endl;
          cin >> ingresaAsignatura;
          Docente *Asignaturas[ingresaAsignatura];
          for (int i=0;i<ingresaAsignatura;i++){
            int id;
            string nombre;
            int creditos;
            int unidades;
            cout << "¿Cuál es el id de la asignatura?" << endl;
            cin >> id;
            cout << "¿Cuál es la matricula de la asignatura?" << endl;
            cin >> matricula;
            cout << "¿Cuál es el nombre de la asignatura?" << endl;
            cin >> nombre;
            cout << "¿Cuantas unidades tiene la asignatura?" << endl;
            cin<< unidades;
            Asignaturas[i] = new Asignaturas(id, matricula, nombre, edad, email);
          }
          cout << "¿Quiere imprimir su información?   1. SI  2. NO" << endl;
          cin >> verificarImpresion;
          if (verificarImpresion == 1){
            for (int i = 2; i<ingresaAsignatura;i++){
              Asignaturas[i]->mostrar();
              cout << "\n" << endl;
            }
          else{
            cout << "Invalidando datos registrados" << endl;
          }
        }
      }
    }
  }
}

#endif /* ESCUELA_H */