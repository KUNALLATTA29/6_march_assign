#include<stdio.h>
int main(){
    int rollno;
    printf("enter your roll number: ");
    scanf("%d", &rollno);
    printf("name\n");
    printf("fname\n");
    float a,b,c;
    printf("enter your physics, chemistry and computer application marks\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("your total marks is: %.2f\n", a+b+c);
    float g= a+b+c;
    float k=(g/300)*100;
    printf("your percentage is: %.2f\n", k);
    
    if (k<40){
        printf("fail");
    }else if(40<=k<50){
        printf("third division");
    }else if(50<=k<60){
        printf("second division");
    }else if(60<=k){
        printf("first division");
    }else {
        printf("input mismatch");
    }
}