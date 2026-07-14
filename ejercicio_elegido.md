## PSEUDOCODIGO



Algoritmo SumaDeCuadrados

    // Subproceso para leer los elementos del vector
    Funcion leerVector(v Por Referencia, n)
        Definir i Como Entero
        Para i <- 0 Hasta n - 1 Con Paso 1 Hacer
            Escribir "Elemento [", i, "]: "
            Leer v[i]
        FinPara
    FinFuncion

    // Subproceso para calcular la suma de los cuadrados
    Funcion suma <- calcularSumaCuadrados(v, n)
        Definir suma, elemento Como Real
        Definir i Como Entero
        suma <- 0
        Para i <- 0 Hasta n - 1 Con Paso 1 Hacer
            elemento <- v[i]
            suma <- suma + (elemento * elemento)
        FinPara
    FinFuncion

    // Proceso Principal (main)
    Definir n Como Entero
    Escribir "Ingrese la cantidad de elementos: "
    Leer n

    Si n <= 0 Entonces
        Escribir "Cantidad no valida."
    Sino
        // Dimensionamos el vector dinámicamente con el tamaño 'n'
        Definir vector Como Real
        Dimension vector[n]
        
        // Llamada a los subprocesos
        leerVector(vector, n)
        
        Definir resultado Como Real
        resultado <- calcularSumaCuadrados(vector, n)
        
        Escribir "La suma de los componentes al cuadrado es: ", resultado
    FinSi

FinAlgoritmoAlgoritmo SumaDeCuadrados

    // Subproceso para leer los elementos del vector
    Funcion leerVector(v Por Referencia, n)
        Definir i Como Entero
        Para i <- 0 Hasta n - 1 Con Paso 1 Hacer
            Escribir "Elemento [", i, "]: "
            Leer v[i]
        FinPara
    FinFuncion

    // Subproceso para calcular la suma de los cuadrados
    Funcion suma <- calcularSumaCuadrados(v, n)
        Definir suma, elemento Como Real
        Definir i Como Entero
        suma <- 0
        Para i <- 0 Hasta n - 1 Con Paso 1 Hacer
            elemento <- v[i]
            suma <- suma + (elemento * elemento)
        FinPara
    FinFuncion

    // Proceso Principal (main)
    Definir n Como Entero
    Escribir "Ingrese la cantidad de elementos: "
    Leer n

    Si n <= 0 Entonces
        Escribir "Cantidad no valida."
    Sino
        // Dimensionamos el vector dinámicamente con el tamaño 'n'
        Definir vector Como Real
        Dimension vector[n]
        
        // Llamada a los subprocesos
        leerVector(vector, n)
        
        Definir resultado Como Real
        resultado <- calcularSumaCuadrados(vector, n)
        
        Escribir "La suma de los componentes al cuadrado es: ", resultado
    FinSi

FinAlgoritmo





## CODIGO 


2.Escribir una programa que calcule y devuelva la suma al cuadrado de las componentes de un vector.
#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}

double calcularSumaCuadrados(const std::vector<double>& v) {
    double suma = 0;
    for (double elemento : v) {
        suma += (elemento * elemento);
    }
    return suma;
}

int main() {
    int n;
    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Cantidad no valida." << std::endl;
        return 0;
    }

    std::vector<double> vector;
    leerVector(vector, n);

    double resultado = calcularSumaCuadrados(vector);
    std::cout << "La suma de los componentes al cuadrado es: " << resultado << std::endl;

    return 0;
}

