#include<stdio.h>
int main(){
int a;
for(int i=1;;i++){
printf("\nPress 1 for Addition.\nPress 2 for Subtraction.\nPress 3 for Multiplication.\nPress 4 for Division.\nPress 5 for Remainder.\nPress 6 to Exit!!\n");
printf("\n\nEnter the Operation: ");
scanf("%d",&a);
if(a==6){
    printf("\nYou've exited the operation!!!!\n");
        break;
}
switch(a){
int x,y;
case 1:
    printf("\nEnter the first digit for addition= ");
    scanf("%d", &x);
    printf("\nEnter the second digit for addition= ");
    scanf("%d", &y);
        printf("\nResult of Addition is = %d\n\n", x+y);
                break;

case 2:
    printf("\nEnter the 1st digit for subtraction= ");
    scanf("%d", &x);
    printf("\nEnter the 2nd digit for subtraction= ");
    scanf("%d", &y);
        printf("\nThe result of subtraction is= %d\n\n", x-y);
            break;

case 3:
    printf("\nEnter the 1st digit for multiplication= ");
    scanf("%d", &x);
    printf("\nEnter the 2nd digit for multiplication= ");
    scanf("%d", &y);
        printf("\nThe result of multiplication is= %d\n\n", x*y);

            break;

case 4:
    printf("\nEnter the 1st digit for Division= ");
    scanf("%d", &x);
    printf("\nEnter the 2nd digit for Division= ");
    scanf("%d", &y);
        printf("\nThe result of Division is= %.2f\n\n",(float)x/y);
            break;

case 5:
    printf("\nEnter the 1st digit to determine the remainder= ");
    scanf("%d", &x);
    printf("\nEnter the 2nd digit to determine the remainder= ");
    scanf("%d", &y);
        printf("\nThe remainder is= %d\n\n",x%y);
            break;

default:
    printf("\nEnter correct operation number.\n");
} }

return 0;
}
