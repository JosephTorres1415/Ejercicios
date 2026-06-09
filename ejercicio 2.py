## ejercicio 1 : Factorial de todos los números hasta un número dado


n = int(input("Ingresa un número: "))

for i in range(1, n + 1):
    factorial = 1
    for j in range(1, i + 1):
        factorial *= j
    print(f"{i}! = {factorial}")



## ejercicio 2 : Potencia de un número real (sin funciones ni librerías)    


base = float(input("Base: "))
numerador = int(input("Numerador del exponente: "))
denominador = int(input("Denominador del exponente: "))

exponente = numerador / denominador

# sin pow()
resultado = 1

if exponente >= 0:
    for _ in range(int(exponente * 10)):  # aproximación básica
        resultado *= base
else:
    for _ in range(int(abs(exponente) * 10)):
        resultado *= base
    resultado = 1 / resultado

print("Resultado aproximado:", resultado)



## ejercicio 3 : Suma de cuadrados de los 100 primeros naturales


suma = 0

for i in range(1, 101):
    suma += i ** 2

print("Suma de cuadrados:", suma)



## ejercicio 4 : Números gemelos en una secuencia


def es_gemelo(num):
    s = str(num)
    n = len(s)

    if n % 2 != 0:
        s = s[:n//2] + s[n//2+1:]  # eliminar dígito central
        n -= 1

    mitad = n // 2
    return s[:mitad] == s[mitad:]

# entrada de números
numeros = [123123, 456456, 1212, 123456, 1111]

contador = 0

for num in numeros:
    if es_gemelo(num):
        contador += 1

print("Cantidad de números gemelos:", contador)



## ejercicio 5 : Suma y producto de fracciones simplificadas


def mcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def simplificar(n, d):
    div = mcd(n, d)
    return n // div, d // div

# entrada
n1, d1 = 8, 12
n2, d2 = 6, 9

# simplificar
n1, d1 = simplificar(n1, d1)
n2, d2 = simplificar(n2, d2)

# suma
num_suma = n1 * d2 + n2 * d1
den_suma = d1 * d2

# producto
num_prod = n1 * n2
den_prod = d1 * d2

# simplificar resultados
num_suma, den_suma = simplificar(num_suma, den_suma)
num_prod, den_prod = simplificar(num_prod, den_prod)

print("Suma:", num_suma, "/", den_suma)
print("Producto:", num_prod, "/", den_prod)



## ejercicio 6 : Comparar dos fechas y ver cuál es anterior


while True:
    d1 = int(input("Día fecha 1 (0 para salir): "))
    if d1 == 0:
        break
    m1 = int(input("Mes fecha 1: "))
    a1 = int(input("Año fecha 1: "))

    d2 = int(input("Día fecha 2: "))
    m2 = int(input("Mes fecha 2: "))
    a2 = int(input("Año fecha 2: "))

    fecha1 = (a1, m1, d1)
    fecha2 = (a2, m2, d2)

    if fecha1 < fecha2:
        print("La primera fecha es anterior")
    elif fecha1 > fecha2:
        print("La segunda fecha es anterior")
    else:
        print("Las fechas son iguales")



## ejercicio 7 : Comparar fechas con máximo de intentos


MAXINTENTOS = 3
intentos = 0

while intentos < MAXINTENTOS:
    d1 = int(input("Día fecha 1 (0 para salir): "))
    if d1 == 0:
        break

    m1 = int(input("Mes fecha 1: "))
    a1 = int(input("Año fecha 1: "))

    d2 = int(input("Día fecha 2: "))
    m2 = int(input("Mes fecha 2: "))
    a2 = int(input("Año fecha 2: "))

    fecha1 = (a1, m1, d1)
    fecha2 = (a2, m2, d2)

    if fecha1 < fecha2:
        print("La primera fecha es anterior")
    elif fecha1 > fecha2:
        print("La segunda fecha es anterior")
    else:
        print("Las fechas son iguales")

    intentos += 1

if intentos == MAXINTENTOS:
    print("Lo siento, ha perdido")



## ejercicio 8 : (Mismo ejercicio con control de intentos)


MAXINTENTOS = 3
intentos = 0

while intentos < MAXINTENTOS:
    d1 = int(input("Día fecha 1 (0 para salir): "))
    if d1 == 0:
        break

    m1 = int(input("Mes fecha 1: "))
    a1 = int(input("Año fecha 1: "))

    d2 = int(input("Día fecha 2: "))
    m2 = int(input("Mes fecha 2: "))
    a2 = int(input("Año fecha 2: "))

    if (a1, m1, d1) < (a2, m2, d2):
        print("Fecha 1 es anterior")
    else:
        print("Fecha 2 es anterior o igual")

    intentos += 1

if intentos == MAXINTENTOS:
    print("Lo siento, ha perdido")



## ejercicio 9 : Tabla de multiplicar del 1 al 10


for i in range(1, 11):
    print(f"\nTabla del {i}")
    for j in range(1, 11):
        print(f"{i} x {j} = {i*j}")



## ejercicio 10 : Entender el algoritmo con para (for)
#                 Transformarlo a mientras (while)
#                 Traducir ambas versiones a Python


# version for

n = int(input("Introduzca un entero positivo: "))

factorial = 1

for i in range(1, n + 1):
    factorial *= i

print("El factorial de", n, "es:", factorial)


# version while

n = int(input("Introduzca un entero positivo: "))

factorial = 1
i = 1

while i <= n:
    factorial *= i
    i += 1

print("El factorial de", n, "es:", factorial)



## ejercicio 13 : Suma de números pares e impares entre 1 y 200


suma_pares = 0
suma_impares = 0

for i in range(1, 201):
    if i % 2 == 0:
        suma_pares += i
    else:
        suma_impares += i

print("Suma de pares:", suma_pares)
print("Suma de impares:", suma_impares)



## ejercicio 14 : Suma de los cuadrados de los 100 primeros números naturales


suma = 0

for i in range(1, 101):
    suma += i ** 2

print("Suma de cuadrados:", suma)



## ejercicio 16 : Número de dígitos de un número positivo N


n = int(input("Ingresa un número positivo: "))

cantidad_digitos = len(str(n))

print("El número tiene", cantidad_digitos, "dígitos")