#include<stdio.h>
int main(){
    char a;
    int num1, num2;
    printf("enter a char: ");
    scanf("%c", &a);
    if(a=='s'){
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
        printf("result: %d %d", num1,num2);
    }else if(a=='w') {
        printf("write two numbers: ");
        scanf("%d %d", &num1, &num2);
        int c;
        c=num1;
        num1=num2;
        num2=c;
        printf("result: %d %d", num1,num2);
    }else{
        printf("input mismatch");
    }
    
    
    
    
    
    return 0;
    
}