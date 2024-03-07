#include<stdio.h>
int main(){
    int a;
    printf("enter grade of student: ");
    scanf("%d", &a);
    if (a<25) {
        printf("F");
    }else if(25<=a<45){
        printf("E");
    }else if(45<=a<50){
        printf("D");
    }else if(50<=a<60){
        printf("c");
    }else if(60<=a<80){
        printf("B");
    }else if(80<=a){
        printf("A");
    }else{
        printf("input mismatch");
    }
  
    
    return 0;
    
}