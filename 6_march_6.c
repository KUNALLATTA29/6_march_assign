#include<stdio.h>
int main(){
    char a;
    int num1, num2;
    printf("enter a char: ");
    scanf("%c", &a);
    if(a=='a'){
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("result: %d", num1+num2);
    }else if(a=='s') {
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("result: %d", num1-num2);
    }else if(a=='d') {
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("result: %d", num1/num2);
    }else if(a=='m') {
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("result: %d", num1*num2);
    }else if(a=='o') {
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("result: %d", num1%num2);
    }else{
        printf("input mismatch");
    }
    
    
    
    
    
    return 0;
    
}