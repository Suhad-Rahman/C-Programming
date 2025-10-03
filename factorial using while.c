#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number= ");
    scanf("%d", &n);
    
    while(n!=0){
        fact = fact*n;
        n= n-1;
    }
    printf("\n\nThe factorial of %d is= %d", n, fact);
    
    return 0;
}