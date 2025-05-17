#include<stdio.h>
int main(){

int x[5], i, sum=0;

for(i=0; i<5; i++){
    printf("\nEnter Element %d= ", i+1);
    scanf("%d", &x[i]);
}

for(i=0; i<5; i++){
    sum+=x[i];
}

printf("The sum is= %d\n", sum);
printf("The average of the given Array= %.2f\n", (float)sum/5);

return 0;
}
