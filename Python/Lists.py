#Las listas en Python son una especie de arreglos

cities = ["Caracas", "Auckland", "Sidney", "Los Angeles"]
print(cities)
print(cities[3])
print(cities[-2])
#Puedo usar indices negativos para acceder a los elementos del arreglo
#Los indicies negativos empezando desde -1 seria el ultimo elemento del arreglo

cities[3] = "Rekiavik"
#Puedo sustituir un elemento del arreglo

print(cities[0:3])
#Puedo escoger el inicio y el final de lo que quiero que se imprima del arreglo
#Nota: El indice final hace referencia que va a imprimir hasta el indice 3-1: 2
#Vemos que se tiene que imprimir hasta el indice 3, pero imprime hasta el indice 2. Asi funciona

#Metodos
#Insertar
cities.insert(2, "Alberta")
print(cities)

#Remover
cities.remove("Caracas")
print(cities)

#Consultar y limpiar con .clear()
print("Bogota" in cities)
print(cities)

#Consultar cantidad de elementos
print(len(cities))