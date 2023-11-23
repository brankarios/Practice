/*Los productos que comercializa una determinada empresa son libros y
CD. Cada producto viene caracterizado por un código que lo identifica de
manera única, el precio base del mercado, y el IVA que se le aplica que es
diferente en cada caso, el 8 % para los libros y el 12 % para los CD. Además
las características propias de cada tipo de producto son para los Libros:
título, autor(es), año de publicación, editorial, ISBN y para los CD: título,
intérprete, año de publicación. Por otro lado, esta empresa aplica un 20 %
de descuento a los libros y un 10 % a los CD. Por tanto, el precio de venta
de cada producto se calculará como: precio base + %IVA –dto. Defina las
clases que sean necesarias para representar los distintos tipos de productos
que acabamos de especificar.
*/

#include <iostream>
#include <string>
using namespace std;

class Producto{
    public:
    int ID;
    float preciobase;
    float iva;
    float descuento;
    public:
    Producto(int ID, int preciobase, float iva, float descuento){

        this->ID = ID;
        this->preciobase = preciobase;
        this->iva = iva;
        this->descuento = descuento;
    }
    float calcprecio(){

        float precioFinal = preciobase + (preciobase * iva);
        precioFinal = precioFinal - (precioFinal * descuento);

        return precioFinal;
    }
};

class Libro:public Producto{

    public:
    string titulo;
    string autor;
    int fechapubliacion;
    string editorial;
    int isbn;
    Libro(int ID, int preciobase, float iva, float descuento, string titulo, string autor, int fechapublicacion, string editorial, int isbn):Producto(ID, preciobase, iva, descuento){

        this->titulo = titulo;
        this->autor = autor;
        this->fechapubliacion = fechapubliacion;
        this->editorial = editorial;
        this->isbn = isbn;
    }
};

class CD:public Producto{
    public:
    string titulocd;
    string interprete;
    int fechapublicacioncd;
    CD(int ID, int preciobase, float iva, float descuento, string titulocd, string interprete, int fechapublicacioncd):Producto(ID, preciobase, iva, descuento){
        
        this->titulocd = titulocd;
        this->interprete = interprete;
        this->fechapublicacioncd = fechapublicacioncd;
    }
};

int main(){

    Libro Alson(1,10,0.12,0.20,"Metodos","Pedrito Gutierrez",8122001,"Auna",0001);
    cout << "El precio del libro es: " << Alson.calcprecio() << endl;
    CD JuanGabriel(2,12,0.08,0.10,"Hasta que te conoci","Juan Gabriel",3031980);
    cout << "El precio del cd es: " << JuanGabriel.calcprecio() << endl;
    
    return 0;
}