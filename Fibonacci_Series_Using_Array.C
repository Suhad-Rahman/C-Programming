#include<stdio.h>
int main(){

int fibo[35], n, i;

printf("How many Fibonacci Numbers Do you Want?(limit 35)\nEnter= ");
scanf("%d", &n);

fibo[0]=0;
fibo[1]=1;
fibo[2]=1;

for(i=3; i<n; i++){
    fibo[i]=fibo[i-1] + fibo[i-2];
}

printf("\nThe Fibonacci Series= ");

for(i=0; i<n; i++){
    printf("%d  ", fibo[i]);
}


return 0;
}
