#include <stdio.h>

int main() {
    int milk = 40, sugar = 100, biscuits = 500, tshirt = 500, trouser = 300, jackets = 1000;

    // 5% GST (Grocery)
    int grocery_price = milk + sugar + biscuits;
    int gst_amount = (grocery_price * 5) / 100;
    int total_bill = gst_amount + grocery_price;

    printf("milk: %d\nsugar: %d\nbiscuits: %d\n______________\nGrocery Price: %d\nGST: %d\nTotal_bill: %d\n\n",
           milk, sugar, biscuits, grocery_price, gst_amount, total_bill);

    printf("--------------------------------------------------\n\n");

    // 7% GST (Clothes)
    int clothes_price = tshirt + trouser + jackets;
    int gst_amount1 = (clothes_price * 7) / 100;
    int total_bill1 = gst_amount1 + clothes_price;

    printf("tshirt: %d\ntrousers: %d\njackets: %d\n______________\nClothes Price: %d\nGST: %d\nTotal_bill: %d\n",
           tshirt, trouser, jackets, clothes_price, gst_amount1, total_bill1);

    return 0;
}