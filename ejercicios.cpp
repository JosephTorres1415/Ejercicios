1.Escribir un programa que calcule la media de los elementos de un vector.

#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}

double calcularMedia(const std::vector<double>& v) {
    double suma = 0;
    for (double elemento : v) {
        suma += elemento;
    }
    return v.empty() ? 0.0 : suma / v.size();
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

    double media = calcularMedia(vector);
    std::cout << "La media es: " << media << std::endl;

    return 0;
}







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




3.Escribir un programa que calcule el producto escalar de dos vectores. Si v y w son los vectores y n su tamaño, el producto escalar se calcula como la sumatoria de V(i)*W(i)
#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n, const std::string& nombre) {
    v.resize(n);
    std::cout << "Lectura del vector " << nombre << ":" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}

double calcularProductoEscalar(const std::vector<double>& v, const std::vector<double>& w) {
    double producto = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        producto += (v[i] * w[i]);
    }
    return producto;
}

int main() {
    int n;
    std::cout << "Ingrese el tamano de los vectores: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Tamano no valido." << std::endl;
        return 0;
    }

    std::vector<double> v;
    std::vector<double> w;

    leerVector(v, n, "V");
    leerVector(w, n, "W");

    double resultado = calcularProductoEscalar(v, w);
    std::cout << "El producto escalar de los vectores es: " << resultado << std::endl;

    return 0;
}







4.Escribir el programa que calcule el producto de un número por un vector (devuelve el vector resultante de multiplicar todas las componentes del vector inicial por un número).
#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}

std::vector<double> multiplicarPorEscalar(const std::vector<double>& v, double numero) {
    std::vector<double> resultado(v.size());
    for (size_t i = 0; i < v.size(); ++i) {
        resultado[i] = v[i] * numero;
    }
    return resultado;
}

void mostrarVector(const std::vector<double>& v) {
    for (double elemento : v) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
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

    double numero;
    std::cout << "Ingrese el numero por el cual multiplicar: ";
    std::cin >> numero;

    std::vector<double> resultado = multiplicarPorEscalar(vector, numero);

    std::cout << "El vector resultante es: ";
    mostrarVector(resultado);

    return 0;
}







5.Escribir un programa que calcule el vector resultante de sumar a cada una de las componentes de un vector dado, un número real.
#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}

std::vector<double> sumarEscalar(const std::vector<double>& v, double numero) {
    std::vector<double> resultado(v.size());
    for (size_t i = 0; i < v.size(); ++i) {
        resultado[i] = v[i] + numero;
    }
    return resultado;
}

void mostrarVector(const std::vector<double>& v) {
    for (double elemento : v) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
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

    double numero;
    std::cout << "Ingrese el numero real a sumar: ";
    std::cin >> numero;

    std::vector<double> resultado = sumarEscalar(vector, numero);

    std::cout << "El vector resultante es: ";
    mostrarVector(resultado);

    return 0;
}









6.Escribir un programa que devuelva el mínimo de los elementos de un vector.
#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}
double buscarMinimo(const std::vector<double>& v) {
    double minimo = v[0];
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < minimo) {
            minimo = v[i];
        }
    }
    return minimo;
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

    double minimo = buscarMinimo(vector);
    std::cout << "El elemento minimo del vector es: " << minimo << std::endl;
    return 0;
}









7.Escribir un programa que devuelva el máximo de los elementos de un vector.
#include <iostream>
#include <vector>

void leerVector(std::vector<double>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Elemento [" << i << "]: ";
        std::cin >> v[i];
    }
}

double buscarMaximo(const std::vector<double>& v) {
    double maximo = v[0];
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] > maximo) {
            maximo = v[i];
        }
    }
    return maximo;
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

    double maximo = buscarMaximo(vector);
    std::cout << "El elemento maximo del vector es: " << maximo << std::endl;

    return 0;
}








8.Escribir un programa que busque el menor y el mayor elemento ingresado en una matriz de m x n.
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

void buscarMinimoMaximo(const std::vector<std::vector<double>>& m, double& minimo, double& maximo) {
    minimo = m[0][0];
    maximo = m[0][0];
    for (size_t i = 0; i < m.size(); ++i) {
        for (size_t j = 0; j < m[i].size(); ++j) {
            if (m[i][j] < minimo) {
                minimo = m[i][j];
            }
            if (m[i][j] > maximo) {
                maximo = m[i][j];
            }
        }
    }
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    double minimo, maximo;
    buscarMinimoMaximo(matriz, minimo, maximo);

    std::cout << "El elemento menor de la matriz es: " << minimo << std::endl;
    std::cout << "El elemento mayor de la matriz es: " << maximo << std::endl;

    return 0;
}








9.Escribir un programa que sume los elementos de cada fila de una matriz de m x n.
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

std::vector<double> calcularSumaFilas(const std::vector<std::vector<double>>& m) {
    std::vector<double> sumas(m.size(), 0.0);
    for (size_t i = 0; i < m.size(); ++i) {
        for (size_t j = 0; j < m[i].size(); ++j) {
            sumas[i] += m[i][j];
        }
    }
    return sumas;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    std::vector<double> resultados = calcularSumaFilas(matriz);

    for (size_t i = 0; i < resultados.size(); ++i) {
        std::cout << "Suma de la fila [" << i << "]: " << resultados[i] << std::endl;
    }

    return 0;
}







10.Escribir un programa que sume los elementos de cada columna de una matriz de Mxn.
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

std::vector<double> calcularSumaColumnas(const std::vector<std::vector<double>>& m, int columnas) {
    std::vector<double> sumas(columnas, 0.0);
    for (int j = 0; j < columnas; ++j) {
        for (size_t i = 0; i < m.size(); ++i) {
            sumas[j] += m[i][j];
        }
    }
    return sumas;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    std::vector<double> resultados = calcularSumaColumnas(matriz, columnas);

    for (int j = 0; j < columnas; ++j) {
        std::cout << "Suma de la columna [" << j << "]: " << resultados[j] << std::endl;
    }

    return 0;
}





11.Escribir un programa que sume los elementos de la diagonal que va de izquierda a derecha en una matriz de m x n.
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

double calcularSumaDiagonalPrincipal(const std::vector<std::vector<double>>& m) {
    double suma = 0;
    size_t limite = (m.size() < m[0].size()) ? m.size() : m[0].size();
    for (size_t i = 0; i < limite; ++i) {
        suma += m[i][i];
    }
    return suma;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    double resultado = calcularSumaDiagonalPrincipal(matriz);
    std::cout << "La suma de la diagonal de izquierda a derecha es: " << resultado << std::endl;

    return 0;
}







12.Escribir un programa que sume los elementos de la diagonal que va de derecha a izquierda en una matriz de m x n.
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

double calcularSumaDiagonalSecundaria(const std::vector<std::vector<double>>& m, int filas, int columnas) {
    double suma = 0;
    int limite = (filas < columnas) ? filas : columnas;
    for (int i = 0; i < limite; ++i) {
        suma += m[i][columnas - 1 - i];
    }
    return suma;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    double resultado = calcularSumaDiagonalSecundaria(matriz, filas, columnas);
    std::cout << "La suma de la diagonal de derecha a izquierda es: " << resultado << std::endl;

    return 0;
}










13.Escribir un programa que copie los elementos de los bordes en sentido horario en una matriz de m x n en un vector resultante llamado v.
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

std::vector<double> copiarBordesHorario(const std::vector<std::vector<double>>& m, int filas, int columnas) {
    std::vector<double> v;

    if (filas == 0 || columnas == 0) return v;

    for (int j = 0; j < columnas; ++j) {
        v.push_back(m[0][j]);
    }

    for (int i = 1; i < filas; ++i) {
        v.push_back(m[i][columnas - 1]);
    }

    if (filas > 1) {
        for (int j = columnas - 2; j >= 0; --j) {
            v.push_back(m[filas - 1][j]);
        }
    }

    if (columnas > 1) {
        for (int i = filas - 2; i > 0; --i) {
            v.push_back(m[i][0]);
        }
    }

    return v;
}

void mostrarVector(const std::vector<double>& v) {
    for (double elemento : v) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    std::vector<double> v = copiarBordesHorario(matriz, filas, columnas);

    std::cout << "El vector resultante v con los bordes en sentido horario es: ";
    mostrarVector(v);

    return 0;
}









14.Escribir un programa que sume e imprima cada elemento en una matriz de m x n, que forme en ella la letra “N” (como en el bingo).
#include <iostream>
#include <vector>

void leerMatriz(std::vector<std::vector<double>>& m, int filas, int columnas) {
    m.resize(filas, std::vector<double>(columnas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> m[i][j];
        }
    }
}

double procesarLetraN(const std::vector<std::vector<double>>& m, int filas, int columnas) {
    double suma = 0;
    std::cout << "Elementos que forman la 'N':" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (j == 0 || j == columnas - 1 || (i == j && i < columnas)) {
                std::cout << m[i][j] << " ";
                suma += m[i][j];
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    return suma;
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el numero de filas (m): ";
    std::cin >> filas;
    std::cout << "Ingrese el numero de columnas (n): ";
    std::cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        std::cout << "Dimensiones no validas." << std::endl;
        return 0;
    }

    std::vector<std::vector<double>> matriz;
    leerMatriz(matriz, filas, columnas);

    double resultado = procesarLetraN(matriz, filas, columnas);
    std::cout << "La suma de los elementos que forman la 'N' es: " << resultado << std::endl;

    return 0;
}













