import javax.swing.JOptionPane;

public class operadores4 {
    
    public static void main(String[] args){

        int monthlySalary = 1000;

        int commissionPerCar = 150;

        float bonusPerCar = (float)0.05;

        float totalBonus = 0;

        float addCars = 0;

        int carsSold = Integer.parseInt(JOptionPane.showInputDialog("Introduzca la cantidad de carros vendidos: "));

        JOptionPane.showMessageDialog(null, "A continuacion, introduzca los precios de los carros vendidos:");

        for(int i = 0; i < carsSold; i++){

            float carsPrices = Float.parseFloat(JOptionPane.showInputDialog("Precios de los carros vendidos: "));

            addCars += carsPrices;

            totalBonus = addCars * bonusPerCar;
        }

        float totalMonthlySalary = monthlySalary + (commissionPerCar * carsSold) + totalBonus;

        JOptionPane.showMessageDialog(null, "El salario del mes del trabajador introducido es de: " + totalMonthlySalary + " dolares");
    }
}
