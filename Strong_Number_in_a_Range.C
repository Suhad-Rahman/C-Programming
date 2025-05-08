#include<stdio.h>
int main(){
int n, low, high, fact, clone, i,remainder, result, count=0;

printf("Enter Low= ");
scanf("%d", &low);

printf("Enter High= ");
scanf("%d", &high);

for(n=low; n<=high; n++){



clone=n;
result=0;

while(clone!=0){
    remainder= clone%10;
    clone/=10;

    fact=1;



for(i=1; i<=remainder; i++){
    fact=fact*i;
    }
    result+=fact;
}

if(result==n && result!=0){
    printf("\n%d is a strong Number!!\n", n);
    count++;
}

}
printf("\nTotal Strong Number in This Range is= %d\n", count);
return 0;
}
