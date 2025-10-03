#include<stdio.h>
int main(){
    int a=0 ,b=1 ,c, n;
    
    printf("Enter the number n= ");
    scanf("%d", &n);
    
    printf("The fibonacci Series= ");
    printf("%d %d", a,b);
    
    
    for(int i=0; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
        printf(" %d", c);
    }
    
    
    return 0;
}