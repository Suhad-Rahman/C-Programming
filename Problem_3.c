#include<stdio.h>
int main(){
int n, i, num, flag=0, sum=0,rem=0, r=0, org;
while(1){
printf("\nEnter 1 to check Prime Number!");
printf("\nEnter 2 to check Perfect number!");
printf("\nEnter 3 to check Pallindrome number!");
printf("\nEnter 4 to EXIT!!!");
printf("\n\nEnter the operation number = ");
scanf("%d", &n);
if(n==4){
    printf("\nHad a great time. Thank you!");
    break;
}
switch(n){

case 1:
    printf("\n\nEnter the number = ");
    scanf("%d", &num);
    for(i=2; i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
        if(flag==0){
            printf("\n%d is a Prime Number.\n", num);
            printf("_________________________________________________________________________________________________");
        }
        else{
            printf("\n%d is not a prime number.\n", num);
            printf("______________________________________________________________________________________________");
        }
        break;
case 2:
    printf("\n\nEnter the number= ");
    scanf("%d", &num);

    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(num==sum){
        printf("\n%d is a Perfect Number!", num);
        printf("\n_________________________________________________________________________________________________");
    }
    else{
        printf("\n%d is not a Perfect number.", num);
        printf("\n_________________________________________________________________________________________________");
    }
    break;

case 3:
    printf("\n\nEnter the number = ");
    scanf("%d", &num);
    org= num;
    while(num!=0){
        rem= num%10;
        r = r*10+rem;
        num= num/10;
    }
    if(org==r){
        printf("\n %d is a Pallindrome Number!\n", org);
        printf("\n_________________________________________________________________________________________________");
    }
    else{
        printf("\n %d is not a Pallindrome Number!!\n", org);
        printf("_________________________________________________________________________________________________");
    }

    break;

default:
    printf("\n\n\nPlease Enter The Correct Operation Number");
    printf("_________________________________________________________________________________________________");
}
}
return 0;
}
