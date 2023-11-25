//Programa que suma los numeros del 1 hasta N


/* Comentario
 * de varias
 * líneas
 */

import java.util.Scanner;

public class test2 {
    
    public static void main(String[] var0){

        Scanner sc = new Scanner(System.in);

        int result = 1;

        int counter = 2;

        //Al escribir sout y apretar el tabulador, se escribirá automáticamente System.out.println()

        System.out.println("Introduzca un numero entero mayor que 0: ");

        
        int number = sc.nextInt();

        if(number < 1){

            System.out.println("Numero invalido, introduzca un numero entero mayor que 0");
        }
        else{

            while(counter <= number){

                result += counter;

                counter++;
            }

            System.out.println("La suma de los numeros del 1 al " + number + " es " + result);

        }
        sc.close();
    }
}
