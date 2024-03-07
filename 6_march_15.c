
#include <stdio.h>

int main()
{
    
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1>num3){
        printf("%d is greater than %d %d.\n", num1, num2, num3);
    } else if(num2>num1 && num2>num3) {
        printf("%d is greater than %d %d.\n", num2, num1, num3);
    } else if(num3>num1 && num3>num2){
        printf("%d is greater than %d %d.\n", num3, num1, num2);
    }else{
        printf("all three are equal");
    }

    return 0;
}
