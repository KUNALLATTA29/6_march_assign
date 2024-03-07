#include<stdio.h>
int main(){
    char a;
    float num;
    
    printf("to change temp from cel to fern type a or type b for vice versa: ");
    scanf("%c", &a);
    if (a=='a') {
        printf("enter value: ");
        scanf("%f", &num);
        float c =(num* 9 / 5) + 32;
        printf("%.1f", c);
    }else if(a=='b') {
        printf("enter value: ");
        scanf("%f", &num);
        float c =(num - 32) * 5 / 9;
        printf("%.1f", c);
    }else {
        printf("input mismatch");
    }
    
    return 0;
    
}