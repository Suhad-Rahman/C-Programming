#include<stdio.h>
int main() {
long long days;
printf("Enter the count of days= ");
scanf("%lld", &days);
long long years, months;
years= days/365;
months= (days- years*365)/30;
days= days- years*365 - months*30;

printf("Years= %lld\n", years);
printf("Months= %lld\n", months);
printf("Days= %lld", days);



return 0;
}
