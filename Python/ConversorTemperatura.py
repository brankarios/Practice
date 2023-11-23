#Hacer un conversor de temperatura de celsius a fahrenheit y vicecersa.

inputTemperature = input("Ingrese los grados que quiere convertir: ")
inputTemperatureInt = int(inputTemperature)
inputScale = input("¿Los grados introducidos son Celsius(C) o Fahrenheit(F)?: ").lower()

if inputScale == "c":

    convertion1 = (inputTemperatureInt * 9/5) + 32
    print(inputTemperatureInt, "grados Celsius equivalen a", convertion1, "grados Fahrenheit")

elif inputScale == "f":

    convertion2 = (inputTemperatureInt - 32) * 5/9
    print(inputTemperatureInt, "grados Fahrenheit equivalen a", convertion2, "grados Celsius")

else:
    print("Introduzca una escala de temperatura válida")
