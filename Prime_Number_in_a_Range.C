#include<stdio.h>
int main(){
int n, low, high, flag, count;

printf("Enter Low= ");
scanf("%d", &low);

printf("Enter High= ");
scanf("%d", &high);
count=0;
for(n=low; n<=high; n++){

flag=0;
for(int i=2; i<=n/2; i++){
    if(n%i==0){
        flag=1;
        break;
    }
}

if(flag==0 && n!=0 && n!=1){
    printf("\n%d is a Prime Number.\n", n);
        count++;
    }

}

printf("\nTotal Prime Numbers in the Range is= %d\n", count);


return 0;
}
