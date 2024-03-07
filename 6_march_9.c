#include<stdio.h>
int main(){
    char cho1;
    printf("type t for trai, s for squ and r for rect: ");
    scanf(" %c", &cho1);
    if (cho1=='t') {
        char cho2;
        printf("type a for area or type v for volume: ");
        scanf(" %c", &cho2);
        if (cho2=='a'){
            printf("enter base and height: ");
            float base, height;
            scanf("%f %f", &base, &height );
            float result = 0.5*base*height;
            printf("%f", result);
        }else if(cho2=='v') {
            printf("enter area of base  and height: ");
            float area, height;
            scanf("%f %f", &area, &height );
            float result=1/3 * area * height;
            printf("%f", result);
        }else {
            printf("input mismatch");
        }
    }else if(cho1=='s') {
        char cho2;
        printf("type a for area or type v for volume: ");
        scanf(" %c", &cho2);
        if (cho2=='a'){
            printf("enter side: ");
            float side;
            scanf("%f", &side );
            float result=side*side;
            printf("%f", result);
        }else if(cho2=='v') {
            printf("enter side length value: ");
            float side;
            scanf("%f", &side);
            float result=side *side*side;
            printf("%f", result);
        }else {
            printf("input mismatch");
        }
    }else if(cho1=='r') {
        char cho2;
        printf("type a for area or type v for volume: ");
        scanf(" %c", &cho2);
        if (cho2=='a'){
            printf("enter length and width: ");
            float length, width;
            scanf("%f %f", &length, &width );
            float result=length*width;
            printf("%f", result);
        }else if(cho2=='v') {
            printf("enter length, width and height value: ");
            float length, width, height;
            scanf("%f %f %f", &length, &width, &height);
            float result=length*width*height;
            printf("%f", result);
        }else {
            printf("input mismatch");
        }
    }else {
        printf("input mismatch");
    }   
  
    
    return 0;
    
}