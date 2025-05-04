package Order;

import java.util.ArrayList;
import java.util.List;

public class Order {
    private List<OrderItem> orderItems = new ArrayList<>();

    public void addOrderItem(OrderItem orderItem) {
        orderItems.add(orderItem);
    }

    public void printOrder() {
        System.out.println("Order Bill:");
        double total = 0;
        for (OrderItem item : orderItems) {
            item.printOrder();
            total += item.getTotalPrice();
        }
        System.out.println("Total Price: Rp " + total);
    }
}
