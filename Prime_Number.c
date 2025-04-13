#include<stdio.h>
int main(){
int i, n, flag=0;
printf("Enter the Number = ");
scanf("%d", &n);

for(i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
}
if(flag==0){
    printf("%d is a PRIME NUMBER!", n);
}
else{
    printf("%d is not a PRIME NUMBER!!", n);
}

return 0;
}
