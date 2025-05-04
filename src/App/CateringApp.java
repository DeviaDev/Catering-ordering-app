package App;

import Data.Customer;
import Order.Order;
import Order.OrderItem;
import Package.Menu;

public class CateringApp {
    public static void main(String[] args) {
        System.out.println(" ============================== ");
        System.out.println(" # ****** * # ");
        System.out.println(" # ******* *** # ");
        System.out.println(" # ***** ***** # ");
        System.out.println(" # ***** *********** # ");
        System.out.println(" # ***** ******* # ");
        System.out.println(" # ******* *** *** # ");
        System.out.println(" # ****** * * # ");
        System.out.println(" =============================== ");
        System.out.println(" ====== MOONSTAR CATERING ====== ");
        System.out.println(" =============================== ");
        System.out.println(" 085317744041--https://www.moonstar_catering.com ");
        System.out.println("====== Jl. Raya Bogor no 523 Malang (depan polres cirebon) ====== ");
        System.out.println();
        System.out.println(" ====== CUSTOMER IDENTITY ====== ");

        Customer orderList = new Customer();
        orderList.inputIdentitas();

        System.out.println("                ====== CATERING PACKAGE LIST ====== ");
        System.out.println("                  ====== Choose by Number ====== ");

        Menu menu1 = new Menu("President Catering", "Empal Gepuk, Telur Kecap, Lalapan, Aqua Botol", 25000);
        menu1.showMenu();
        System.out.println();

        Menu menu2 = new Menu("Special Catering", "Ayam Betutu, Capcay, Lalapan, Aqua Botol", 20000);
        menu2.showMenu();
        System.out.println();

        Menu menu3 = new Menu("Original Package", "Telur Balado, Capcay, Aqua Botol", 15000);
        menu3.showMenu();
        System.out.println();

        orderList.inputOrder();

        System.out.println("                ====== YOUR ORDER ====== ");
        orderList.showBill();

        System.out.println("                ====== YOUR BILL ====== ");
        


        // Assuming the customer chose a menu package
        // Menentukan menu yang dipilih
Menu selectedMenu = null;
String selectedPackage = orderList.getPackage().toLowerCase();

if (selectedPackage.contains("president")) {
    selectedMenu = menu1;
} else if (selectedPackage.contains("special")) {
    selectedMenu = menu2;
} else if (selectedPackage.contains("original")) {
    selectedMenu = menu3;
}

if (selectedMenu != null) {
    int quantity = orderList.getQuantity();

    Order orderBill = new Order();
    orderBill.addOrderItem(new OrderItem(quantity, selectedMenu));
    orderBill.printOrder();
} else {
    System.out.println("Invalid package selection.");
}



        System.out.println("           ====== T E R I M A  K A S I H ======");
    }
}
