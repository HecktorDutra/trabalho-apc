#include <stdio.h>
#include <stdlib.h>

int main() {
#define MAX_ITEMS 10

typedef struct {
    char name[30];
    float price;
} MenuItem;

typedef struct {
    MenuItem items[MAX_ITEMS];
    int itemCount;
} Order;

void displayMenu(MenuItem menu[], int size) {
    printf("Menu:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
}

void addItemToOrder(Order *order, MenuItem item) {
    if (order->itemCount < MAX_ITEMS) {
        order->items[order->itemCount] = item;
        order->itemCount++;
        printf("Item added: %s - $%.2f\n", item.name, item.price);
    } else {
        printf("Order is full. Cannot add more items.\n");
    }
}

void displayOrder(Order order) {
    printf("Your Order:\n");
    float total = 0;
    for (int i = 0; i < order.itemCount; i++) {
        printf("%d. %s - $%.2f\n", i + 1, order.items[i].name, order.items[i].price);
        total += order.items[i].price;
    }
    printf("Total: $%.2f\n", total);
}


    MenuItem menu[] = {
        {"Big Mac", 5.99},
        {"Cheeseburger", 2.49},
        {"McChicken", 3.99},
        {"French Fries", 2.99},
        {"Coca Cola", 1.49}
    };
    int menuSize = sizeof(menu) / sizeof(menu[0]);
    Order order = {{}, 0};

    int choice;
    do {
        printf("\nMcDonald's Self-Service Totem\n");
        displayMenu(menu, menuSize);
        printf("%d. Finish and Pay\n", menuSize + 1);
        printf("Choose an item by number: ");
        scanf("%d", &choice);

        if (choice > 0 && choice <= menuSize) {
            addItemToOrder(&order, menu[choice - 1]);
        } else if (choice == menuSize + 1) {
            displayOrder(order);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != menuSize + 1);

    printf("Thank you for your order!\n");
    return 0;
}
