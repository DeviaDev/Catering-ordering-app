package Package;

import Order.CateringMenu;

public class Menu extends CateringMenu {

    public Menu(String packageName, String description, double price) {
        super(packageName, description, price);
    }

    @Override
    public void printOrder(int quantity) {
        System.out.println(quantity + " x " + packageName + " = Rp " + (price * quantity));
    }
}
