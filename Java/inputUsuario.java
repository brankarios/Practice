import java.util.Scanner;

public class inputUsuario {
    

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);


        System.out.println("Escriba su nombre: ");

        String nombre = sc.nextLine(); //Para guardar strings se hace con nextline

        System.out.println("El nombre es: " + nombre);

        sc.close();

        //Para guardar char se usa next()charAt(0)

    }
}
