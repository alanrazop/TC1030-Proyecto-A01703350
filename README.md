# TC1030-Proyecto-A01703350
Proyecto Integrador de la materia TC1030. Trata sobre una comunidad (Escuela) en la que se tiene que agregar la información de los miembros y además agregar datos de dicha escuela, por lo que se genera una estructura de clases para manejar a los tipos de miembros en la comunidad. Los separa en Alumnos, Profesores y Familiares. 

# Contexto
El programa sirve para poder entender como estan divididos los miembros de la comunidad ue conforman a la escuela y el registro de datos.

# Funcionalidad
Este programa permite mostar la información de los miembros que forman parte de la escuela así como registrar y mostrar datos de la escuela a la que pertenecen.
Consta de un menu con las opciones iniciales y corre sobre consola.

# Información útil
El programa esta hecho con C++ standard por lo que corre en todos los sistemas operativos. Descargue los archivos ".h" y ".cpp" y corralos dentro de una misma carpeta (juntos) para que funcione correctamente. 
Para ello se tiene que ingresar esto para poder compilarlo:  clang++-7 -pthread -std=c++17 -o main main.cpp    ./main

# Correcciones
Para la entrega final de este proyecto se hicieron las siguientes correcciones:
1. Se empleó de manera correcta la herencia en las clases heredadas de la clase Miembro (clase padre).
2. Los modificadores de acceso son utilizados de manera adecuada dentro del programa.
3. Se aplica el polimorfismo correspondiente a cada uno de los tipos de miembros.
