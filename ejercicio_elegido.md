## PSEUDOCODIGO



Algoritmo CalcularPotenciaAproximada

    // Declaración de variables
    Definir base, exponente, resultado Como Real
    Definir numerador, denominador, limite, i Como Entero

    // Entrada de datos
    Escribir "Base: "
    Leer base
    Escribir "Numerador del exponente: "
    Leer numerador
    Escribir "Denominador del exponente: "
    Leer denominador

    // Cálculo del exponente decimal
    exponente <- numerador / denominador

    // Inicialización del resultado
    resultado <- 1

    // Estructura condicional para evaluar si el exponente es positivo o negativo
    Si exponente >= 0 Entonces
        // Se calcula el límite del ciclo (aproximación multiplicada por 10)
        limite <- ParteEntera(exponente * 10)
        
        Para i <- 1 Hasta limite Con Paso 1 Hacer
            resultado <- resultado * base
        FinPara
    Sino
        // Si es negativo, usamos el valor absoluto para el bucle
        limite <- ParteEntera(ValorAbsoluto(exponente) * 10)
        
        Para i <- 1 Hasta limite Con Paso 1 Hacer
            resultado <- resultado * base
        FinPara
        
        // Al ser exponente negativo, el resultado final se invierte (1 / resultado)
        resultado <- 1 / resultado
    FinSi

    // Mostrar el resultado final obtenido
    Escribir "Resultado aproximado: ", resultado

FinAlgoritmo




## CODIGO 


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

