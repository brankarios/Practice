import javax.swing.JOptionPane;

public class operadores6 {
    
    public static void main(String[] args){

        //Programa que calcule el cuadrado de una suma

        float numberA = Float.parseFloat(JOptionPane.showInputDialog("Introduzca un numero: "));

        float numberB = Float.parseFloat(JOptionPane.showInputDialog("Introduzca otro numero: "));

        float numberASquare = numberA * numberA;
        float numberBSquare = numberB * numberB;

        float squareAdd = numberASquare + (2 * (numberA * numberB)) + numberBSquare;

        JOptionPane.showMessageDialog(null, "La suma al cuadrado de los numeros introducidos es: " + squareAdd);

    }
}
