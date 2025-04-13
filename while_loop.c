#include<stdio.h>
int main(){
int n,x;
printf("Enter the number of operations= ");
scanf("%d", &n);
while(n--){
    printf("\n\nEnter the number= ");
    scanf("%d", &x);

    if(x%2==0){
        printf("The number %d is EVEN", x);
    }
    else{
        printf("The number %d is ODD", x);
    }
}
return 0;
}
