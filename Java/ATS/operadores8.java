import java.util.Scanner;

public class operadores8 {
    
    public static void main(String[] args){

        //Programa que resuelva ecuaciones de segundo grado usando la resolvente

        Scanner sc = new Scanner(System.in);

        System.out.println("Digite los coeficientes de la ecuacion de segundo grado a resolver:");

        int coefficientA = sc.nextInt();
        int coefficientB = sc.nextInt();
        int coefficientC = sc.nextInt();

        double discriminant = (coefficientB * coefficientB) - (4 * coefficientA * coefficientC);
        double solution1 = ((coefficientB * -1) + Math.sqrt(discriminant)) / (2 * coefficientA);
        double solution2 = ((coefficientB * -1) - Math.sqrt(discriminant)) / (2 * coefficientA);

        if(discriminant == 0){
        
            System.out.println("La ecuacion cuadratica tiene una sola solucion y es x = " + solution1);
        }
        else{
            System.out.println("La ecuacion cuadratica tiene dos soluciones: x = " + solution1 + " y x = " + solution2);
        }

        if(discriminant < 0){

            System.out.println("La ecuacion cuadratica cuyos coeficientes fueron introducidos no tiene soluciones en el conjunto de numeros reales");
        }


        sc.close();
    }
}
