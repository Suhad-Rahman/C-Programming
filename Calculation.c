#include<stdio.h>
int main(){

int a, b;

printf("Enter a=");
scanf("%d", &a);
printf("Enter b=");
scanf("%d", &b);

int sum= a+b;
int sub= a-b;
int multi= a*b;
int div= a/b;

printf("The Sum is= %d", sum);
printf("\nThe Subtraction is= %d", sub);
printf("\nThe multiplication is= %d", multi);
printf("\nThe division is= %d", div);




return 0;
}
