#include<stdio.h>

void sum(){
    int a,b;
    printf("\n\nPlease enter 2 numbers to sum= ");
    scanf("%d %d", &a, &b);
    
    printf("\nThe sum is= %d\n", a+b);
}

void sub(){
    int a,b;
    printf("\n\nPlease enter 2 numbers to subtract= ");
    scanf("%d %d", &a, &b);
    
    printf("\nThe subtraction is= %d\n", a-b);
}

void multiplication(){
    int a,b;
    printf("\n\nPlease enter 2 numbers to multiply= ");
    scanf("%d %d", &a, &b);
    
    printf("\nThe multiplication is= %d\n", a*b);
}

void division(){
    int a,b;
    printf("\n\nPlease enter 2 numbers to divide= ");
    scanf("%d %d", &a, &b);
    
    printf("\nThe division is= %d\n", a/b);
}

void modulus(){
    int a,b;
    printf("\n\nPlease enter 2 numbers to determine modulus= ");
    scanf("%d %d", &a, &b);
    
    printf("\nThe modulus is= %d\n", a%b);
}


int main(){
    int n;
    printf("Enter 1 to Sum\nEnter 2 to Subtract\nEnter 3 to Multiply\nEnter 4 to Divide\nEnter 5 to Determine Modulus\n");
    printf("\nPlease enter the operation: ");
    scanf("%d", &n);
    
    
    switch(n){
        case 1:{
            sum();
            break;
        }
        
        case 2:{
            sub();
            break;
        }
        
        case 3:{
            multiplication();
            break;
        }
        
        case 4:{
            division();
            break;
        }
        
        case 5:{
            modulus();
            break;
        }
        
    }
    
    return 0;
}