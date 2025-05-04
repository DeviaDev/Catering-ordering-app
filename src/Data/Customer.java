package Data;

import java.util.Scanner;

public class Customer {
    private String name;
    private String address;
    private String phone;
    private String selectedPackage;
    private int quantity;

    private double pajakresto = 5000;
    private Scanner scanner = new Scanner(System.in);

    public void inputIdentitas() {
        System.out.print("Name: ");
        name = scanner.nextLine();

        System.out.print("Address: ");
        address = scanner.nextLine();

        System.out.print("Phone Number: ");
        phone = scanner.nextLine();
    }

    public void inputOrder() {
        System.out.print("Choose Your Catering Package: ");
        selectedPackage = scanner.nextLine();

        System.out.print("Quantity: ");
        quantity = scanner.nextInt();
    }

    public void showBill() {
        System.out.println("Name            : " + name);
        System.out.println("Address         : " + address);
        System.out.println("Phone Number    : " + phone);
        System.out.println("Catering Package: " + selectedPackage);
        System.out.println("Quantity        : " + quantity);
        System.out.println("Pajak resto     : " + pajakresto);
    }

    public String getPackage() {
        return selectedPackage;
    }

    public int getQuantity() {
        return quantity;
    }
}
