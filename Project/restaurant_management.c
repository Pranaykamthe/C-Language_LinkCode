#include <stdio.h>
#include <string.h>

#define MAX_MENU_ITEMS 20
#define MAX_ORDERS 50
#define NAME_LENGTH 40
#define CATEGORY_LENGTH 20
#define CATEGORY_COUNT 3
#define GST_RATE 0.05f

typedef struct {
    char name[NAME_LENGTH];
    char category[CATEGORY_LENGTH];
    float price;
} MenuItem;

typedef struct {
    int tableNumber;
    int itemIndex;
    int quantity;
} Order;

MenuItem menuItems[MAX_MENU_ITEMS];
Order orders[MAX_ORDERS];

const char categories[CATEGORY_COUNT][CATEGORY_LENGTH] = {
    "Fast Food",
    "Full Meal",
    "Dessert"
};

int menuCount = 0;
int orderCount = 0;

int addMenuItemToList(const char name[], const char category[], float price) {
    if (menuCount == MAX_MENU_ITEMS) {
        return 0;
    }

    strncpy(menuItems[menuCount].name, name, NAME_LENGTH - 1);
    menuItems[menuCount].name[NAME_LENGTH - 1] = '\0';

    strncpy(menuItems[menuCount].category, category, CATEGORY_LENGTH - 1);
    menuItems[menuCount].category[CATEGORY_LENGTH - 1] = '\0';

    menuItems[menuCount].price = price;
    menuCount++;

    return 1;
}

void loadDefaultMenu(void) {
    addMenuItemToList("Masala Dosa", "Fast Food", 80.0f);
    addMenuItemToList("Idli Sambar", "Fast Food", 60.0f);
    addMenuItemToList("Veg Burger", "Fast Food", 90.0f);
    addMenuItemToList("Pizza", "Fast Food", 150.0f);

    addMenuItemToList("Paneer Masala", "Full Meal", 200.0f);
    addMenuItemToList("Dal Tadka", "Full Meal", 150.0f);
    addMenuItemToList("Veg Biryani", "Full Meal", 180.0f);
    addMenuItemToList("South Indian Thali", "Full Meal", 220.0f);

    addMenuItemToList("Gulab Jamun", "Dessert", 70.0f);
    addMenuItemToList("Ice Cream", "Dessert", 60.0f);
    addMenuItemToList("Rasmalai", "Dessert", 90.0f);
    addMenuItemToList("Chocolate Brownie", "Dessert", 120.0f);
}

void showCategoryChoices(void) {
    int i;

    printf("\nChoose Category\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < CATEGORY_COUNT; i++) {
        printf("%d. %s\n", i + 1, categories[i]);
    }

    printf("--------------------------------------------------\n");
}

int chooseCategory(void) {
    int choice;

    while (1) {
        showCategoryChoices();
        printf("Enter category number: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= CATEGORY_COUNT) {
            return choice - 1;
        }

        printf("Invalid category. Please try again.\n");
    }
}

void showMenuByCategory(int categoryIndex) {
    int i;
    int found;
    int displayId;

    found = 0;
    displayId = 1;

    printf("\n==================== %s ====================\n",
           categories[categoryIndex]);
    printf("%-5s %-30s %10s\n", "ID", "Item", "Price");
    printf("--------------------------------------------------\n");

    for (i = 0; i < menuCount; i++) {
        if (strcmp(menuItems[i].category, categories[categoryIndex]) == 0) {
            printf("%-5d %-30s Rs %7.2f\n",
                   displayId,
                   menuItems[i].name,
                   menuItems[i].price);
            found = 1;
            displayId++;
        }
    }

    if (!found) {
        printf("No items in this category.\n");
    }

    printf("--------------------------------------------------\n");
}

int showSelectedCategoryMenu(void) {
    int categoryIndex;

    if (menuCount == 0) {
        printf("\nNo items are available in the menu.\n");
        return -1;
    }

    categoryIndex = chooseCategory();
    showMenuByCategory(categoryIndex);

    return categoryIndex;
}

void showMenu(void) {
    showSelectedCategoryMenu();
}

int findItemIndexInCategory(int categoryIndex, int displayId) {
    int i;
    int currentId = 1;

    for (i = 0; i < menuCount; i++) {
        if (strcmp(menuItems[i].category, categories[categoryIndex]) == 0) {
            if (currentId == displayId) {
                return i;
            }

            currentId++;
        }
    }

    return -1;
}

void addMenuItem(void) {
    char name[NAME_LENGTH];
    float price;
    int categoryIndex;

    if (menuCount == MAX_MENU_ITEMS) {
        printf("\nMenu is full. You cannot add more items.\n");
        return;
    }

    printf("\nAdd New Menu Item\n");
    printf("--------------------------------------------------\n");

    printf("Enter item name: ");
    scanf(" ");
    fgets(name, NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0';

    categoryIndex = chooseCategory();

    printf("Enter item price: ");
    scanf("%f", &price);

    if (price <= 0) {
        printf("Price must be greater than zero.\n");
        return;
    }

    addMenuItemToList(name, categories[categoryIndex], price);
    printf("Item added successfully.\n");
}

void removeOrderAt(int position) {
    int i;

    for (i = position; i < orderCount - 1; i++) {
        orders[i] = orders[i + 1];
    }

    orderCount--;
}

void updateOrdersAfterMenuRemoval(int removedIndex) {
    int i = 0;

    while (i < orderCount) {
        if (orders[i].itemIndex == removedIndex) {
            removeOrderAt(i);
        } else {
            if (orders[i].itemIndex > removedIndex) {
                orders[i].itemIndex--;
            }

            i++;
        }
    }
}

void removeMenuItem(void) {
    int categoryIndex;
    int itemId;
    int itemIndex;
    int i;
    char removedName[NAME_LENGTH];

    if (menuCount == 0) {
        printf("\nNo items are available to remove.\n");
        return;
    }

    printf("\nRemove Menu Item\n");
    printf("--------------------------------------------------\n");

    categoryIndex = showSelectedCategoryMenu();
    if (categoryIndex == -1) {
        return;
    }

    printf("Enter item ID to remove: ");
    scanf("%d", &itemId);

    itemIndex = findItemIndexInCategory(categoryIndex, itemId);

    if (itemIndex == -1) {
        printf("Invalid item ID. No item was removed.\n");
        return;
    }

    strncpy(removedName, menuItems[itemIndex].name, NAME_LENGTH - 1);
    removedName[NAME_LENGTH - 1] = '\0';

    updateOrdersAfterMenuRemoval(itemIndex);

    for (i = itemIndex; i < menuCount - 1; i++) {
        menuItems[i] = menuItems[i + 1];
    }

    menuCount--;
    printf("%s removed from the menu.\n", removedName);
}

void takeOrder(void) {
    int tableNumber;
    int itemId;
    int quantity;
    int itemIndex;
    int categoryIndex;
    float amount;

    if (orderCount == MAX_ORDERS) {
        printf("\nOrder list is full.\n");
        return;
    }

    if (menuCount == 0) {
        printf("\nPlease add menu items before taking orders.\n");
        return;
    }

    printf("\nTake Order\n");
    printf("--------------------------------------------------\n");

    printf("Enter table number: ");
    scanf("%d", &tableNumber);
    if (tableNumber <= 0) {
        printf("Table number must be greater than zero.\n");
        return;
    }

    categoryIndex = showSelectedCategoryMenu();
    if (categoryIndex == -1) {
        return;
    }

    printf("Enter item ID: ");
    scanf("%d", &itemId);

    itemIndex = findItemIndexInCategory(categoryIndex, itemId);

    if (itemIndex == -1) {
        printf("Invalid item ID. Order was not saved.\n");
        return;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);
    if (quantity <= 0) {
        printf("Quantity must be greater than zero.\n");
        return;
    }

    orders[orderCount].tableNumber = tableNumber;
    orders[orderCount].itemIndex = itemIndex;
    orders[orderCount].quantity = quantity;
    orderCount++;

    amount = menuItems[itemIndex].price * quantity;
    printf("Order saved: %s x %d = Rs %.2f\n",
           menuItems[itemIndex].name,
           quantity,
           amount);
}

void generateBill(void) {
    int tableNumber;
    int i;
    int itemIndex;
    int found = 0;
    float subtotal = 0.0f;
    float itemTotal;
    float gst;
    float grandTotal;

    if (orderCount == 0) {
        printf("\nNo orders are available for billing.\n");
        return;
    }

    printf("\nEnter table number for bill: ");
    scanf("%d", &tableNumber);

    printf("\n==================== BILL ====================\n");
    printf("Table Number: %d\n", tableNumber);
    printf("--------------------------------------------------\n");
    printf("%-25s %-8s %10s\n", "Item", "Qty", "Amount");
    printf("--------------------------------------------------\n");

    for (i = 0; i < orderCount; i++) {
        if (orders[i].tableNumber == tableNumber) {
            itemIndex = orders[i].itemIndex;
            itemTotal = menuItems[itemIndex].price * orders[i].quantity;

            printf("%-25s %-8d Rs %7.2f\n",
                   menuItems[itemIndex].name,
                   orders[i].quantity,
                   itemTotal);

            subtotal += itemTotal;
            found = 1;
        }
    }

    if (!found) {
        printf("No orders found for this table.\n");
        printf("--------------------------------------------------\n");
        return;
    }

    gst = subtotal * GST_RATE;
    grandTotal = subtotal + gst;

    printf("--------------------------------------------------\n");
    printf("%-35s Rs %7.2f\n", "Subtotal", subtotal);
    printf("%-35s Rs %7.2f\n", "GST 5%", gst);
    printf("%-35s Rs %7.2f\n", "Grand Total", grandTotal);
    printf("--------------------------------------------------\n");
    printf("Thank you. Visit again!\n");
}

void cancelTableOrders(void) {
    int tableNumber;
    int i = 0;
    int removed = 0;

    if (orderCount == 0) {
        printf("\nNo orders are available to cancel.\n");
        return;
    }

    printf("\nEnter table number to cancel: ");
    scanf("%d", &tableNumber);

    while (i < orderCount) {
        if (orders[i].tableNumber == tableNumber) {
            removeOrderAt(i);
            removed++;
        } else {
            i++;
        }
    }

    if (removed == 0) {
        printf("No orders found for table %d.\n", tableNumber);
    } else {
        printf("%d order(s) cancelled for table %d.\n", removed, tableNumber);
    }
}

void showMainMenu(void) {
    printf("\n========== RESTAURANT MANAGEMENT ==========\n");
    printf("1. Show Menu\n");
    printf("2. Add Menu Item\n");
    printf("3. Remove Menu Item\n");
    printf("4. Take Order\n");
    printf("5. Generate Bill\n");
    printf("6. Cancel Table Orders\n");
    printf("7. Exit\n");
    printf("--------------------------------------------------\n");
}

int main(void) {
    int choice;

    loadDefaultMenu();

    do {
        showMainMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showMenu();
                break;
            case 2:
                addMenuItem();
                break;
            case 3:
                removeMenuItem();
                break;
            case 4:
                takeOrder();
                break;
            case 5:
                generateBill();
                break;
            case 6:
                cancelTableOrders();
                break;
            case 7:
                printf("\nThank you. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
