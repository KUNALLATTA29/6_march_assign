#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int max;

    printf("Enter 10 numbers:\n");

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

    printf("Number 6: ");
    scanf("%d", &num6);

    printf("Number 7: ");
    scanf("%d", &num7);

    printf("Number 8: ");
    scanf("%d", &num8);

    printf("Number 9: ");
    scanf("%d", &num9);

    printf("Number 10: ");
    scanf("%d", &num10);

    max = num1;

    if (num2 > max) {
        max = num2;
    } 
    else if (num3 > max) {
        max = num3;
    }
    else if (num4 > max) {
        max = num4;
    }
    else if (num5 > max) {
        max = num5;
    }
    else if (num6 > max) {
        max = num6;
    }
    else if (num7 > max) {
        max = num7;
    }
    else if (num8 > max) {
        max = num8;
    }
    else if (num9 > max) {
        max = num9;
    }
    else if (num10 > max) {
        max = num10;
    }

    if (num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5 && num5 == num6 && num6 == num7 && num7 == num8 && num8 == num9 && num9 == num10) {
        printf("All numbers are equal: %d\n", num1);
    } else {
        printf("The maximum number is: %d\n", max);
    }

    return 0;
}
