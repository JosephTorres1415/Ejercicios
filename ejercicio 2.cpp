// Ejercicio 1: Factorial de todos los números hasta un número dado


#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        long long factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        cout << i << "! = " << factorial << endl;
    }

    return 0;
}


//Ejercicio 2: Potencia de un número real (sin funciones ni librerías)

  
#include <iostream>

using namespace std;

int main() {
    double base;
    int numerador, denominador;

    cout << "Base: ";
    cin >> base;
    cout << "Numerador del exponente: ";
    cin >> numerador;
    cout << "Denominador del exponente: ";
    cin >> denominador;

    double exponente = (double)numerador / denominador;
    double resultado = 1.0;

    if (exponente >= 0) {
        int iteraciones = (int)(exponente * 10); // aproximación básica
        for (int i = 0; i < iteraciones; ++i) {
            resultado *= base;
        }
    } else {
        double exponente_abs = -exponente;
        int iteraciones = (int)(exponente_abs * 10);
        for (int i = 0; i < iteraciones; ++i) {
            resultado *= base;
        }
        resultado = 1.0 / resultado;
    }

    cout << "Resultado aproximado: " << resultado << endl;

    return 0;
}


//Ejercicio 3: Suma de cuadrados de los 100 primeros naturales


#include <iostream>

using namespace std;

int main() {
    long long suma = 0;

    for (int i = 1; i <= 100; ++i) {
        suma += (long long)i * i;
    }

    cout << "Suma de cuadrados: " << suma << endl;

    return 0;
}


// Ejercicio 4: Números gemelos en una secuencia


#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool es_gemelo(int num) {
    string s = to_string(num);
    int n = s.length();

    if (n % 2 != 0) {
        s.erase(n / 2, 1); // eliminar dígito central
        n--;
    }

    int mitad = n / 2;
    return s.substr(0, mitad) == s.substr(mitad);
}

int main() {
    vector<int> numeros = {123123, 456456, 1212, 123456, 1111};
    int contador = 0;

    for (int num : numeros) {
        if (es_gemelo(num)) {
            contador++;
        }
    }

    cout << "Cantidad de números gemelos: " << contador << endl;

    return 0;
}


//Ejercicio 5: Suma y producto de fracciones simplificadas


#include <iostream>

using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Usamos paso por referencia (&) para modificar los valores directamente
void simplificar(int &n, int &d) {
    int div = mcd(n, d);
    n /= div;
    d /= div;
}

int main() {
    // entrada
    int n1 = 8, d1 = 12;
    int n2 = 6, d2 = 9;

    // simplificar
    simplificar(n1, d1);
    simplificar(n2, d2);

    // suma
    int num_suma = n1 * d2 + n2 * d1;
    int den_suma = d1 * d2;

    // producto
    int num_prod = n1 * n2;
    int den_prod = d1 * d2;

    // simplificar resultados
    simplificar(num_suma, den_suma);
    simplificar(num_prod, den_prod);

    cout << "Suma: " << num_suma << "/" << den_suma << endl;
    cout << "Producto: " << num_prod << "/" << den_prod << endl;

    return 0;
}


//Ejercicio 6: Comparar dos fechas y ver cuál es anterior

#include <iostream>

using namespace std;

int main() {
    while (true) {
        int d1, m1, a1;
        cout << "Día fecha 1 (0 para salir): ";
        cin >> d1;
        if (d1 == 0) {
            break;
        }
        cout << "Mes fecha 1: ";
        cin >> m1;
        cout << "Año fecha 1: ";
        cin >> a1;

        int d2, m2, a2;
        cout << "Día fecha 2: ";
        cin >> d2;
        cout << "Mes fecha 2: ";
        cin >> m2;
        cout << "Año fecha 2: ";
        cin >> a2;

        // Estructura de comparación secuencial (equivalente a tuplas de Python)
        if (a1 < a2 || (a1 == a2 && m1 < m2) || (a1 == a2 && m1 == m2 && d1 < d2)) {
            cout << "La primera fecha es anterior" << endl;
        } else if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2)) {
            cout << "La segunda fecha es anterior" << endl;
        } else {
            cout << "Las fechas son iguales" << endl;
        }
    }

    return 0;
}


//Ejercicio 7: Comparar fechas con máximo de intentos

#include <iostream>

using namespace std;

int main() {
    const int MAXINTENTOS = 3;
    int intentos = 0;

    while (intentos < MAXINTENTOS) {
        int d1, m1, a1;
        cout << "Día fecha 1 (0 para salir): ";
        cin >> d1;
        if (d1 == 0) {
            break;
        }

        cout << "Mes fecha 1: ";
        cin >> m1;
        cout << "Año fecha 1: ";
        cin >> a1;

        int d2, m2, a2;
        cout << "Día fecha 2: ";
        cin >> d2;
        cout << "Mes fecha 2: ";
        cin >> m2;
        cout << "Año fecha 2: ";
        cin >> a2;

        if (a1 < a2 || (a1 == a2 && m1 < m2) || (a1 == a2 && m1 == m2 && d1 < d2)) {
            cout << "La primera fecha es anterior" << endl;
        } else if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2)) {
            cout << "La segunda fecha es anterior" << endl;
        } else {
            cout << "Las fechas son iguales" << endl;
        }

        intentos++;
    }

    if (intentos == MAXINTENTOS) {
        cout << "Lo siento, ha perdido" << endl;
    }

    return 0;
}


//Ejercicio 8: (Mismo ejercicio con control de intentos)

#include <iostream>

using namespace std;

int main() {
    const int MAXINTENTOS = 3;
    int intentos = 0;

    while (intentos < MAXINTENTOS) {
        int d1, m1, a1;
        cout << "Día fecha 1 (0 para salir): ";
        cin >> d1;
        if (d1 == 0) {
            break;
        }

        cout << "Mes fecha 1: ";
        cin >> m1;
        cout << "Año fecha 1: ";
        cin >> a1;

        int d2, m2, a2;
        cout << "Día fecha 2: ";
        cin >> d2;
        cout << "Mes fecha 2: ";
        cin >> m2;
        cout << "Año fecha 2: ";
        cin >> a2;

        if (a1 < a2 || (a1 == a2 && m1 < m2) || (a1 == a2 && m1 == m2 && d1 < d2)) {
            cout << "Fecha 1 es anterior" << endl;
        } else {
            cout << "Fecha 2 es anterior o igual" << endl;
        }

        intentos++;
    }

    if (intentos == MAXINTENTOS) {
        cout << "Lo siento, ha perdido" << endl;
    }

    return 0;
}


//Ejercicio 9: Tabla de multiplicar del 1 al 10

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << "\nTabla del " << i << endl;
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }

    return 0;
}


//Ejercicio 10: Entender el algoritmo con para (for) / Transformarlo a mientras (while)

#include <iostream>

using namespace std;

int main() {
    // --- VERSION FOR ---
    int n;
    cout << "Introduzca un entero positivo (para version FOR): ";
    cin >> n;

    long long factorial_for = 1;
    for (int i = 1; i <= n; ++i) {
        factorial_for *= i;
    }
    cout << "El factorial de " << n << " es: " << factorial_for << endl;


    // --- VERSION WHILE ---
    cout << "Introduzca un entero positivo (para version WHILE): ";
    cin >> n;

    long long factorial_while = 1;
    int i = 1;
    while (i <= n) {
        factorial_while *= i;
        i++;
    }
    cout << "El factorial de " << n << " es: " << factorial_while << endl;

    return 0;
}


// Ejercicio 13: Suma de números pares e impares entre 1 y 200

#include <iostream>

using namespace std;

int main() {
    int suma_pares = 0;
    int suma_impares = 0;

    for (int i = 1; i <= 200; ++i) {
        if (i % 2 == 0) {
            suma_pares += i;
        } else {
            suma_impares += i;
        }
    }

    cout << "Suma de pares: " << suma_pares << endl;
    cout << "Suma de impares: " << suma_impares << endl;

    return 0;
}


// Ejercicio 14: Suma de los cuadrados de los 100 primeros números naturales

#include <iostream>

using namespace std;

int main() {
    long long suma = 0;

    for (int i = 1; i <= 100; ++i) {
        suma += (long long)i * i;
    }

    cout << "Suma de cuadrados: " << suma << endl;

    return 0;
}


//Ejercicio 16: Número de dígitos de un número positivo N



#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Ingresa un número positivo: ";
    cin >> n;

    int cantidad_digitos = to_string(n).length();

    cout << "El número tiene " << cantidad_digitos << " dígitos" << endl;

    return 0;
}
