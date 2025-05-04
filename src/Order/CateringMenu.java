package Order;

public abstract class CateringMenu {
    protected String packageName;
    protected String description;
    protected double price;

    public CateringMenu(String packageName, String description, double price) {
        this.packageName = packageName;
        this.description = description;
        this.price = price;
    }

    public void showMenu() {
        System.out.println("Package     : " + packageName);
        System.out.println("Description : " + description);
        System.out.println("Price       : Rp. " + price);
    }

    public String getPackageName() {
        return packageName;
    }

    public double getPrice() {
        return price;
    }
    
    public String getDescription() {
        return description;
    }

    public abstract void printOrder(int quantity);
}
