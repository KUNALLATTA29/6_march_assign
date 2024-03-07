#include<stdio.h>
int main(){
    char a;
    printf("enter a char: ");
    scanf("%c", &a);
    if(a=='a'){
        printf("apple");
    }else if(a=='b') {
        printf("ball");
    }else if(a=='c') {
        printf("cat");
    }else if(a=='d') {
        printf("dog");
    }else if(a=='e') {
        printf("egg");
    }else{
        printf("input mismatch");
    }
    
    
    
    
    
    return 0;
    
}