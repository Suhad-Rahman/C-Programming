//Euclid's Algorithm || Euclidian Algorithm

#include<stdio.h>

int GCD(int a, int b) {
    int rem;
    
    while(b!=0) {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {
    
    int n1, n2;
    int gcd;
    printf("Enter two numbers to evaluate GCD(Greatest Common Divisor): ");
    
    scanf("%d %d", &n1, &n2);
    
    gcd = GCD(n1,n2);
    
    printf("GCD(%d, %d)= %d\n", n1,n2,gcd);
    printf("GCD is aka HCF-->Highest Common Factor!\n");
    
    //Now for LCM
    
    printf("LCM(%d, %d)= %d", n1, n2, n1*n2/gcd);
    return 0;
}