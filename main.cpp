//
// Proyecto A01703350 main
// Alan Fernando Razo Peña
// A01703350
// 25/05/2021
// Este es el proyecto integrador para la clase TC1030 Programación Orientado a Objetos. Es un programa que captura diferentes tipos de miembros de la comundidad estudiantil asi como la informacion de la escuela.
//
#include <iostream>
#include <stdlib.h>
#include "Miembro.h" // incluir bibliotecas
#include "Escuela.h"
using namespace std;

//Se realizan las funciones de la clase Escuela
int main(){
  
  Escuela escuela;
  escuela.registrarInfo();
  escuela.imprimeInfo();
  escuela.crea_ejemplos();
  escuela.muestra_miembros();

  
  system("Pause");
  return 0;
}
