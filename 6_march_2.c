#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a==1){
        printf("jan");
    }else if(a==2) {
        printf("feb");
    }else if(a==3) {
        printf("mar");
    }else if(a==4) {
        printf("apr");
    }else if(a==5) {
        printf("may");
    }else if(a==6) {
        printf("jun");
    }else if(a==7) {
        printf("jul");
    }else if(a==8){
        printf("agu");
    }else if(a==9){
        printf("sep");
    }else if(a==10){
        printf("oct");
    }else if(a==11){
        printf("nov");
    }else if(a==12){
        printf("dec");
    }else{
        printf("input mismatch");
    }
    
    
    
    
    
    return 0;
    
}