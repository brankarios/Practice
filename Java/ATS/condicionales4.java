import java.util.Scanner;

public class condicionales4 {
    
    public static void main(String[] args){

        Scanner input = new Scanner(System.in);;

        System.out.println("Ingrese el precio total a pagar del cliente: ");

        double totalPrice = input.nextFloat();

        double discount = totalPrice * 0.20;

        if(totalPrice > 300){

            System.out.println("Como su compra es mayor a 300 dolares, es elegible para un descuento");
            System.out.println("El descuento es de 20%, su precio a pagar es: " + discount + " dolares");
        }
        else{
            System.out.println("Su compra no es elegible para un descuento, el total a pagar es: " + totalPrice + " dolares");
        }

        input.close();
    }
}   
