#include<stdio.h>
int main(){
    char t;
    printf("tell me time by type m for morning, a for afternoon or e for evening: ");
    scanf("%c", &t);
    if(t=='m'){
        printf("Good morning!");
    }else if(t=='a'){
        printf("Good afternoon!");
    }else if(t=='e'){
        printf("Good evening!");
    }else{
        printf("input mismatch");
    }
    
    return 0;
}