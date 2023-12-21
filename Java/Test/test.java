import java.util.Scanner; 

class test{


    public static void main(String[] var0) {
      System.out.println("Hola");

      Scanner sc = new Scanner(System.in);

      System.out.println("Introduzca un numero: ");

      int number = sc.nextInt();

      System.out.println("El doble del numero introducido es: " + (number * 2));

      for(int i = 2; i < 10; i *= i){

         System.out.println(i);
      }

      //Esto cierra la clase scanner pero tambien cierra el System.in, las advertencia desaparecera si lo pongo pero no es recomendable
      sc.close();
   }
}
