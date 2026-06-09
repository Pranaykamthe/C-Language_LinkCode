#include <stdio.h>

int main() {

    int lap = 80000, mob = 25000, car = 90000;

    // Original total
    int total = lap + mob + car;
    float final_bill = total + (total * 10.0 / 100);

    printf("Original Prices:\n");
    printf("Laptop: %d\nMobile: %d\nCar: %d\n", lap, mob, car);
    printf("Total: %d\nFinal Bill (10%%): %.2f\n\n", total, final_bill);

    // Increase each by 20%
    float lap_new = lap + (lap * 20.0 / 100);
    float mob_new = mob + (mob * 20.0 / 100);
    float car_new = car + (car * 20.0 / 100);

    float new_total = lap_new + mob_new + car_new;
    float new_final = new_total + (new_total * 10.0 / 100);

    printf("After 20%% Increase:\n");
    printf("Laptop: %.2f\nMobile: %.2f\nCar: %.2f\n", lap_new, mob_new, car_new);
    printf("Total: %.2f\nFinal Bill (10%%): %.2f\n", new_total, new_final);

    return 0;
}