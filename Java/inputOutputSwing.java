import javax.swing.JOptionPane;

public class inputOutputSwing {

    public static void main(String[] args) {
        
        /*String apellido;

        apellido = JOptionPane.showInputDialog("Escriba su apellido");

        System.out.println("Esto es increíble mr. " + apellido);*/


        /* Uso JOptoinPane.show.InputDialog("") 
         * Lo que escriba alli se mostrará en pantalla en una interfaz
         * Y lo que escriba en esa interfaz se guarda en la variable
         * A la que igualé JOptionPane
        */

        /*Para guardar otro tipo de dato que no sea un String se hace algo distinto: */

        int x;

        x = Integer.parseInt(JOptionPane.showInputDialog("Digite un numero: "));

        JOptionPane.showMessageDialog(null, "El doble del numero introducido es: " + (x * 2));

        /*Si quiero guardar un float por ejemplo
         * float y;
         * y = Float.parseFloat(JOptionPane.showInputDialog("Digite un numero: "));
         */

         /*Si quiero guardar un char:
          * char a;
          * a = JOptionPane.showInputDialog("Digite un caracter:").charAt(0);
          */
    }
}
