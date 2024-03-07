#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a==1){
        printf("sunday");
    }else if(a==2) {
        printf("monday");
    }else if(a==3) {
        printf("tuesday");
    }else if(a==4) {
        printf("wednesday");
    }else if(a==5) {
        printf("thrusday");
    }else if(a==6) {
        printf("friday");
    }else if(a==7) {
        printf("saterday");
    }else {
        printf("input mismatch");
    }
    
    return 0;
    
}