import numpy as np

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

# Función para calcular la primera y segunda sumas (son iguales)
def suma1y2(n):
    suma = 0
    for k in range(n+1):
        suma += (-5)**k / factorial(k)
    return suma

# Función para calcular la tercera suma
def suma3(n):
    suma = 0
    for k in range(n+1):
        suma += 5**k / factorial(k)
    return 1 / suma

# Calcular las aproximaciones
aprox1y2 = suma1y2(9)
aprox3 = suma3(9)

# Valor exacto (dado en el problema)
valor_exacto = 6.74 * 10**-3

print("Aproximación 1 y 2:", aprox1y2)
print("Aproximación 3:", aprox3)
print("Valor exacto:", valor_exacto)