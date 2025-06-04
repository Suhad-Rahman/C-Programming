#include<stdio.h>
void call_by_reference(int*, int*);
int main(){
    int x, y;
    printf("Enter x= ");
    scanf("%d", &x);
    printf("Enter y= ");
    scanf("%d", &y);
    call_by_reference(&x, &y);
    printf("Value of x & y in main function: %d %d\n", x, y);
    printf("Their Sum= %d\n", x+y);
    
    return 0;
}

void call_by_reference(int* x, int* y){
    *x=12;
    *y=15;
    printf("value of x & y in user defined function: %d %d\n", *x, *y);
    printf("Their Sum: %d\n", *x+*y);
}