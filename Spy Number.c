#include<stdio.h>
int main(){
    int n, clone, sum=0, product=1, rem;
    
    printf("Please enter the number: ");
    scanf("%d", &n);
    
    clone=n;
    
    while(clone!=0){
        rem=clone%10;
        sum=sum+rem;
        product *= rem;
        clone= clone/10;
    }
    
    if(sum==product){
        printf("%d is a SPY Number.", n);
    }
    
    else{
        printf("%d is NOT a Spy Number.",n);
    }
    
    return 0;
}