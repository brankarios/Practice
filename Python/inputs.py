#Para recibir datos del usuario usamos la palabra reservada input

userAge = input("Escribe tu edad: ")
print(userAge)

#tenemos la palabra reservada type que nos arrojara el tipo de dato de la variable que introduzcamos
print(type(userAge))

#Aunque ingrese un numero en el input me lo tomara como si fuera un string, aca es donde entra la conversion
#Para castear escribo el tipo de dato que quiero y entre parentesis la variable que quiero convertir
#Y debo guardarlo en una variable

edadConvertida = int(userAge)
print(type(edadConvertida))
print(edadConvertida + 1)

#Tambien estan las funciones para float, string, y bool para hacer conversiones