#include <stdio.h>

int main() {
    int units;
    float unit_price = 10;
    float discount, total_bill;

    printf("Enter the number of units: ");
    scanf("%d", &units);

    total_bill = units * unit_price;
    printf("your amount without discount: %.2f\n", total_bill);
    if (units >= 1 && units <= 10) {
        discount = total_bill * 0.10;
        printf("discount: 10\n");
    } else if (units <= 20) {
        discount = total_bill * 0.15;
        printf("discount: 15\n");
    } else if (units <= 40) {
        discount = total_bill * 0.30;
        printf("discount: 30\n");
    } else if (units >= 50) {
        discount = total_bill * 0.50;
        printf("discount: 50\n");
    } else {
        discount = 0;
    }

    total_bill -= discount;
    
    printf("Final bill after discount: %.2f\n", total_bill);

    return 0;
}
