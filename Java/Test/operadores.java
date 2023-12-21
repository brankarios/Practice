import javax.swing.JOptionPane;

public class operadores{
     
    public static void main(String[]  args){

        int firstNumber, secondNumber;

        firstNumber = Integer.parseInt(JOptionPane.showInputDialog("Digite un numero: "));

        secondNumber = Integer.parseInt(JOptionPane.showInputDialog("Digite otro numero: "));

        JOptionPane.showMessageDialog(null, "La suma de los numeros introducidos es: " + (firstNumber + secondNumber));

        JOptionPane.showMessageDialog(null, "La resta de los numeros introducidos es: " + (firstNumber - secondNumber));

        JOptionPane.showMessageDialog(null, "La multiplicacion de los numeros introducidos es: " + (firstNumber * secondNumber));

        JOptionPane.showMessageDialog(null, "La division de los numeros introducidos es: " + (firstNumber / secondNumber));

        JOptionPane.showMessageDialog(null, "El resto de los numeros introducidos es: " + (firstNumber % secondNumber));

    }
}
