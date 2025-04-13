#include<stdio.h>
int main(){
int i, n, sum=0;
printf("Enter the number= ");
scanf("%d", &n);

for(i=1;i<=n/2;i++){
    if(n%i==0){
        sum+=i;
    }
}
if(sum==n){
    printf("%d is a PERFECT number!", n);
}
else{
    printf("%d is not a PERFECT number!!!", n);
}
return 0;
}
