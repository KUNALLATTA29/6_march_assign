
#include <stdio.h>

int main()
{
    char choice;
    printf("choose from e,o,v,t,c,k,d,q,s: ");
    scanf(" %c", &choice);
    if(choice=='e'){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0){
            printf("%d is even.\n", number);
        }else {
            printf("it's not even");
        }
    }else if(choice=='o'){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 != 0){
            printf("%d is odd.\n", number);
        }else {
            printf("it's not odd");
        }
    }else if(choice=='v'){
        int age;

        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 18) {
            printf("You are eligible to vote.\n");
        } else {
            printf("You are not eligible to vote yet.\n");
        }
    }else if(choice=='t'){
        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        if (num1 > num2){
            printf("%d is greater than %d.\n", num1, num2);
        } else {
            printf("%d is greater than %d.\n", num2, num1);
        }
    }else if(choice=='c'){
        char ch;

        printf("Enter a character: ");
        scanf(" %c", &ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf(" %c is a vowel.\n", ch);
        } else {
            printf(" %c is a consonat\n", ch);
        }
    }else if(choice=='k'){
        char ch;
    
        printf("Enter a character: ");
        scanf(" %c", &ch);

        if (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' ||
            ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p') {
            printf("upper line\n");
        }else if(ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' ||
            ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l') {
            printf("mid line\n");
        }else if(ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' ||
            ch == 'n' || ch == 'm') {
            printf("lower line\n");
        }else{
            printf("input mismatch");
        }
    }else if(choice=='d'){
        int num;
    
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 5 == 0 && num % 2 == 0) {
            printf("This number is divisible by both 5 and 2\n");
        } else {
            printf("This number is not divisible by both 5 and 2\n");
        }
    }else if(choice=='q'){
        int num;
    
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 7 == 0 || num % 15 == 0) {
            printf("This number is divisible\n");
        } else {
            printf("This number is not divisible\n");
        }
    }else if(choice=='s'){
        char choice2;
        printf("choose w or i: ");
        scanf(" %c", &choice2);
        if(choice2=='w'){
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Before swapping: a = %d, b = %d\n", a, b);
            int c;
            c=a;
            a=b;
            b=c;
            printf("After swapping: a = %d, b = %d\n", a, b);
        }else if(choice2=='i') {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Before swapping: a = %d, b = %d\n", a, b);
            a=a+b;
            b=a-b;
            a=a-b;
            printf("After swapping: a = %d, b = %d\n", a, b);
        } else {
            printf("Input mismatch.\n");
        }
        
    }

    return 0;
}
