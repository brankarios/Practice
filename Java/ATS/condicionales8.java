import java.util.Scanner;

public class condicionales8 {
    
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        System.out.println("Ingrese un numero: ");

        String userNumber = sc.nextLine();

        int length = userNumber.length();

        System.out.println("El numero de cifras del numero introducid0 es: " + length);

        sc.close();
    }
}
