#include<stdio.h>
int main(){
    int n, square, sum=0, rem;
    
    printf("Please enter the number: ");
    scanf("%d", &n);
    
    square= n*n;
    
    while(square!=0){
        rem=square%10;
        sum=sum+rem;
        square=square/10;
    }
    
    if(sum==n){
        printf("%d is a NEON Number.", n);
    }
    else{
        printf("%d is NOT a Neon Number.", n);
    }
    
    
    return 0;
}