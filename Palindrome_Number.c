#include<stdio.h>
int main(){

int num,rev=0,x;
printf("Enter the Number= ");
scanf("%d", &num);

int org=num;
while(num!=0){
    x=num%10;
    rev=rev*10+x;
    num=num/10;
}
printf("\nReverse= %d\n", rev);
if(org==rev){
    printf("The number %d is Palindrome.", org);
}
else{
    printf("The number %d is NOT Palindrome.", org);
}

                return 0;
}
