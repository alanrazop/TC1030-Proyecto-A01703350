//
// Proyecto A01703350 clase Docente y heredadas
// Alan Fernando Razo Peña
// A01703350
// 21/05/2021
// La clase Docente contiene todas las operaciones relacionadas con la información para el profesor, y es utilizada por la función main del programa, parte del proyecto A01703350.
//

#ifndef DOCENTE_H
#define DOCENTE_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

//Declaracion de clase del Docente (empleado) que es abstracta
class Docente {

    //Atributos
    protected:
        int id;
        string nombre;
        int celular;
        string email;

    //Métodos que tendrá el objeto
    public:
      Docente (int id, string nombre, int celular, string email){
        this -> id = id;
        this -> nombre = nombre;
        this -> celular = celular;
        this -> email = email;
      }

    virtual void mostrar();

    int getId(){
        return this -> id;
    }
    string getNombre(){
        return this -> nombre;
    }
    int getCelular(){
        return this -> celular;
    }
    string getEmail(){
        return this -> email;
    }
    void setId(int _id){
        this -> id = _id;
    }
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    void setCelular(int _celular){
        this -> celular = _celular;
    }
    void setEmail(string _email){
        this -> email = _email;
    }
};

void Docente::mostrar(){
    cout << "Su id es: " << id << endl;
    cout << "Su nombre es: " << nombre << endl;
    cout << "Su número de celular es: " << celular << endl;
    cout << "Su correo electrónico es: " << email << endl;
    }
//Declaro el objeto grupos que hereda de Docente
class Grupos : public Docente{
private:
    int integrantes;
    string nombre;
    int salon;
public:
    Grupos(int integrantes, string nombre, int salon): Docente(id, nombre, celular, email){
      this -> integrantes = integrantes;
      this -> nombre = nombre;
      this -> salon = salon;
    }
    int getIntegrantes(){
        return this -> integrantes;
    }
    string getNombre(){
        return this -> nombre;
    }
    int getSalon(){
        return this -> salon;
    }
    void setIntegrantes(int _integrantes){
        this -> integrantes = _integrantes;
    }
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    void setSalon(int _salon){
        this -> salon = _salon;
    }
    void mostrar();
};

void Grupos::mostrar(){
    Docente::mostrar();
    cout << "El número de integrantes en el grupo es de: " << integrantes << endl;
    cout << "El nombre de su salón es: " << nombre << endl;
    cout << "Su salón es el número: " << salon << endl;
}



//Declaro objeto PorHora que hereda de Empleado
class Alumnos : public Docente{
private:
     int id;
     int matricula;
     string nombre;
     string email;
     int edad;;
public:
    Alumnos(int id, int matricula, string nombre, int edad, string email):Docente(id, nombre, celular, email){
        this -> id = id;
        this -> matricula = matricula;
        this -> nombre = nombre;
        this -> edad = edad;
        this -> email = email;
    }
    int getId(){
        return this -> id;
    }
    float getMatricula(){
        return this -> matricula;
    }
    string getNombre(){
        return this -> nombre;
    }
    string getEdad(){
        return this -> edad;
    }
    string getEmail(){
        return this -> email;
    }
    void setId(int _id){
        this -> id = _id;
    }
    void setMatricula(int _matricula){
        this -> matricula = _matricula;
    }
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    void setEdad(int _edad){
        this -> edad = _edad;
    }
    void setEmail(string _email){
        this -> email = _email;
    }
    void mostrar();
};

void Alumnos::mostrar(){
    Docente::mostrar();
    cout << "El id del estudiante es: " << id << endl;
    cout << "La matricula del estudiante es: " << matricula << endl;
    cout << "Su nombre es: " << nombre << endl;
    cout << "La edad del alumno es: " << edad << endl;
    cout << "Su correo electrónico del estudiante es: " << email << endl;
    }
//Declaro el objet Practicante que hereda de Empleado
class Asignaturas: public Docente{

    //Variables de instancia privadas del objeto
private:
    int id;
    string nombre;
    int creditos;
    int unidades;
public:
    Asignaturas(int id, string nombre, int creditos, int unidades): Docente(id, nombre, celular, email){
        this -> id = id;
        this -> nombre = nombre;
        this -> creditos = creditos;
        this -> unidades = unidades;
    }
    int getId(){
        return this -> id;
    }
    string getNombre(){
        return this -> nombre;
    }
    int getCreditos(){
        return this -> creditos;
    }
    int getUnidades(){
        return this -> unidades;
    }
    void setId(int _id){
        this -> id = _id;
    }
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    void setCreditos(int _creditos){
        this -> creditos = _creditos;
    }
    void setUnidades(int _unidades){
        this -> unidades = _unidades;
    }
    void mostrar();
};

void Asignaturas::mostrar(){
    Docente::mostrar();
    cout << "El id de la materia es " << id << endl;
    cout << "El nombre de la materia es: " << nombre << endl;
    cout << "La asignatura vale" << creditos << "creditos" << endl;
    cout << "La asignatura cuenta con " << unidades <<"unidades"<< endl;
}
#endif /* DOCENTE_H */