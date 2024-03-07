#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int max;

    printf("Enter 5 numbers:\n");

    printf("Number 1: ");
    scanf("%d", &num1);

    printf("Number 2: ");
    scanf("%d", &num2);

    printf("Number 3: ");
    scanf("%d", &num3);

    printf("Number 4: ");
    scanf("%d", &num4);

    printf("Number 5: ");
    scanf("%d", &num5);
    

    max = num1;

    if (num2 > max) {
        max = num2;
    }else if (num3 > max) {
        max = num3;
    }else if (num4 > max) {
        max = num4;
    }else if (num5 > max) {
        max = num5;
    }
    
    if (num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5) {
        printf("All numbers are equal: %d\n", num1);
    } else {
        printf("The maximum number is: %d\n", max);
    }

    return 0;
}
