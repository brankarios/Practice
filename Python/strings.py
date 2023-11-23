name = "Cesar Carios"
age = 19
weight = 49.5

print(name.upper())
#Las variables tienen funciones integradas, y las puedo utilizar. Se les llama metodos

print(name.lower())
#Por ejemplo, upper() y lower() lo que hacen es poner en mayusculas y minusculas el string recibido

print(name.find("rios"))
#Tambien tenemos el metodo find() que nos busca un string que le pasemos como parametro. Nos devuelve el indice del string
print(name.replace("Carios", "Brancovic"))
#replace() hace lo que su nombre indica, reemplazar un string que tengamos por el otro que introduzcamos\

print(name)

print("Carios" in name)
#La palabra reservada in funciona similar a find, nos busca un string que pongamos en una variable que introduzcamos
#La diferencia con find() es que in nos devuelve true o false
