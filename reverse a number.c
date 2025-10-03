#include<stdio.h>
int main(){
    int n, clone, rev=0, rem;
    printf("Enter the number to reverse= ");
    scanf("%d", &n);
    
    clone=n;
    while(clone != 0){
        rem= clone%10;
        rev= rev*10+rem;
        clone = clone/10;
    }
    printf("The reverse number is= %d", rev);
    
    
    return 0;
}