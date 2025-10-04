#include<stdio.h>
int main(){
    int base, power, result=1;
    
    printf("<<<Hello There! Use me to calculate power>>>\n\nEnter the base= ");
    scanf("%d", &base);
    
    printf("Enter the power= ");
    scanf("%d", &power);
    
    for(int i=0; i<power; i++){
        result= result*base;
    }
    
    printf("The answer is = %d", result);
    
    return 0;
}