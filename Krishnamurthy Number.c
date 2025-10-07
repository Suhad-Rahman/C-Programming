#include<stdio.h>
int main(){
    int n, clone, rem, fact, box=0;
    
    printf("Please enter the number: ");
    scanf("%d", &n);
    if(n==0){
        printf("%d is NOT a Krishnamurthy Number. \n\nSince, 0!=1",n);
    }
    else{
    clone=n;
    
    while(clone!=0){
        fact=1;
        rem=clone%10;
        
        for(int i=1; i<=rem; i++){
            fact = fact*i;
        }
        box = box+fact;
        clone= clone/10;
    }
    
    if(box==n){
        printf("%d is a Krishnamurthy Number.", n);
    }
    else{
        printf("%d is NOT a Krishnamurthy Number.", n);
    }
    }
    
    return 0;
}