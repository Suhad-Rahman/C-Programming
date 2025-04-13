#include<stdio.h>
int main(){
int o,n,i,sum=0;

while(1){
printf("\n\nPress 1 to print 1 to n and their Sum.");
printf("\nPress 2 to print n to 1 and their Sum.");
printf("\nPress 3 to print the EVEN numbers of 1 to n and their Sum.");
printf("\nPress 4 to print the ODD numbers of 1 to n and their sum.");
printf("\nPress 5 to Exit!!!\n\n");
printf("\nEnter Operation= ");
scanf("%d", &o);

if(o==5){
    printf("Bye!");
    break;
}


 switch(o){

 case 1:
     sum=0;
     printf("Enter n = ");
     scanf("%d", &n);

     for(i=1;i<=n;i++){
        printf("%d ", i);
        sum+=i;
     }
    printf("\nSum= %d\n", sum);
    printf("\n_________________________________________");
    break;

case 2:
     sum=0;
     printf("Enter n = ");
     scanf("%d", &n);

     for(i=n;i>=1;i--){
        printf("%d ", i);
        sum+=i;
     }
    printf("\nSum= %d\n", sum);
    printf("\n_________________________________________");
    break;

case 3:
     sum=0;
     printf("Enter n = ");
     scanf("%d", &n);

     for(i=1;i<=n;i++){
            if(i%2!=0){
                continue;
            }
        printf("%d ", i);
        sum+=i;
     }
    printf("\nSum= %d\n", sum);
    printf("\n_________________________________________");
    break;

case 4:
     sum=0;
     printf("Enter n = ");
     scanf("%d", &n);

     for(i=1;i<=n;i++){
            if(i%2==0){
                continue;
            }
        printf("%d ", i);
        sum+=i;
     }
    printf("\nSum= %d\n", sum);
    printf("\n_________________________________________");
    break;

default:
    printf("Enter the correct operation number, Thank You!");


}
}
return 0;
}
