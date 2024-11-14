import numpy as np
import matplotlib.pyplot as plt

# Definir el polinomio q6(x) = x^6 - 6x^5 + 15x^4 - 20x^3 + 15x^2 - 6x + 1
def q6(x):
    return x**6 - 6*x**5 + 15*x**4 - 20*x**3 + 15*x**2 - 6*x + 1

# Definir el polinomio (x-1)^6
def binomio(x):
    return (x - 1)**6

# Valores donde se evaluará q6 y (x-1)^6
x = np.linspace(0.995, 1.005, 100)

# Evaluar los polinomios
q6_canonica = q6(x)
q6_anidada = np.array([anidada(6, [1, -6, 15, -20, 15, -6, 1], i) for i in x])
q6_binomio = binomio(x)

# Graficar
plt.plot(x, q6_canonica, label=r'Forma Canónica $q_6(x)$')
plt.plot(x, q6_anidada, label=r'Forma Anidada $q_6(x)$')
plt.plot(x, q6_binomio, label=r'Binomio $(x-1)^6$')

plt.legend()
plt.xlabel('x')
plt.ylabel('Valor del polinomio')
plt.title('Comparación de Evaluaciones de $q_6(x)$ y $(x-1)^6$')
plt.grid(True)
plt.show()
