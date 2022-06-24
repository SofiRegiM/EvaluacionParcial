# EvaluacionParcial

Escriba un programa en C++ que cumpla con los siguientes requerimientos: 
Crear una clase base llamada Persona con los atributos privados de nombre como string y edad tipo 
entero, implemente las funciones de get y set para el acceso y modificación de los atributos privados. 
Dentro de la clase Persona defina un método virtual tipo void llamado muestraDatos que reciba un 
parámetro entero para el id y desplegado de información. Implemente también constructor con valores 
default. 
Crear una segunda clase derivada de Persona llamada Estudiante con los atributos privados de matrícula 
tipo string y plan de estudio tipo string, implemente las funciones de get y set para el acceso y 
modificación de los atributos privados. Implemente el método de muestraDatos donde despliegue el id, 
nombre, edad, matrícula y plan de estudio. Implemente también constructor con valores default. 
Crear una tercera clase derivada de Persona llamada Profesor con los atributos privados de número de 
nómina tipo string y departamento tipo string, implemente las funciones de get y set para el acceso y 
modificación de los atributos privados. Implemente el método de muestraDatos donde despliegue el id, 
nombre, edad, número de nómina y departamento. Implemente también constructor con valores 
default. 
Desde el main crear un número de por ejemplo 4 personas en un array dinámico, reservar memoria para 
la creación de 2 estudiantes y 2 Profesores mediante la palabra reservada new, con valores de 
inicialización de ejemplo para los constructores que usted defina (nombre edad, etc.). Desplegar en un 
for la información de las 4 personas mediante el método de muestraDatos, se pueden utilizar 
apuntadores. 
Por último, libere la memoria reservada mediante la palabra reservada delete. Es nesario manejar 
archivos .cpp y .h para cada una de las clases definidas. 
