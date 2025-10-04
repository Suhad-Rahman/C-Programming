#include<stdio.h>
int main(){
int n,high, low, clone, remainder, reverse, count;

printf("Enter Low= ");
scanf("%d", &low);

printf("Enter High= ");
scanf("%d", &high);

count=0;

for(n=low; n<=high; n++){

clone=n;
reverse=0;
while(clone!=0){
remainder= clone%10;
reverse= reverse*10+remainder;
clone/=10;

    }
    if(reverse==n){
        printf("\n%d is a Pallindrome Number!\n", n);
            count++;
    }
}
printf("\nTotal Pallindrome Number in the Given Range is= %d\n", count);

return 0;
}
