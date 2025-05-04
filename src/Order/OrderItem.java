package Order;

public class OrderItem {
    private int quantity;
    private CateringMenu menu;

    public OrderItem(int quantity, CateringMenu menu) {
        this.quantity = quantity;
        this.menu = menu;
    }

    public double getTotalPrice() {
        return quantity * menu.getPrice() + 5000 ;
    }

    public void printOrder() {
        System.out.println(quantity + " x " + menu.getPackageName() + " = Rp " + getTotalPrice());
        System.out.println("Pajak Resto = Rp. 5000 " );
    }
}
