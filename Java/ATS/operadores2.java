/*Programa que calcule el salario semanal de un empleado a partir de sus horas semanales trabajadas
* y de su salario por hora
*/

import javax.swing.JOptionPane;

public class operadores2{

    public static void main(String[] args){


    float salaryPerHour = Float.parseFloat(JOptionPane.showInputDialog("Introduzca el salario por hora del empleado: "));
    float weeklyWorkedHours = Float.parseFloat(JOptionPane.showInputDialog("Ahora introduzca la cantidad de horas que trabaja semanalmente: "));

    float weeklySalary = salaryPerHour * weeklyWorkedHours;

    JOptionPane.showMessageDialog(null, "El salario semanal del trabajador es de: " + weeklySalary + " dolares");

    }
}