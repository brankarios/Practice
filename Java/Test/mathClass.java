import java.util.Scanner;

public class mathClass {
    
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int maxRandomRange = 100;
        int minRandomRange = 1;

        System.out.println("Digite un numero: ");

        int userNumber = sc.nextInt();
        //int exponentNumber = sc.nextInt();

        //System.out.println("La raiz cuadrada de " + number + " es " + Math.sqrt(number));

        //System.out.println(baseNumber + " elevado a la " + exponentNumber + " es: " + Math.pow(baseNumber, exponentNumber));

        int randomNumber = (int)(Math.random() * maxRandomRange) + minRandomRange;

        System.out.println("El numero aleatorio es: " + randomNumber);

        if(userNumber == randomNumber){

            System.out.println("Usted es un ganador!!!");
        }
        else{
            System.out.println("Intente de nuevo");
        }
        sc.close();

    }
}
