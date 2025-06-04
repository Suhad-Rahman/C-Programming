#include<stdio.h>

void call_by_value(int, int);
int main(){
    int a, b;
    printf("Enter a= ");
    scanf("%d", &a);
    printf("Enter b= ");
    scanf("%d", &b);
    
    printf("a & b in the main function: %d %d\n", a, b);
    printf("a+b= %d\n", a+b);
    call_by_value(a,b);
    return 0;
}

void call_by_value(int a,int b){
    a=20;
    b=25;
    printf("a & b int the user defined function: %d %d\n", a, b);
    printf("a+b= %d\n", a+b);
    return;
}