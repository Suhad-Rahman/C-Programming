#include<stdio.h>
int main(){
int n, fact, clone, i,remainder, result;

printf("Enter the Number= ");
scanf("%d", &n);

clone=n;
result=0;

while(clone!=0){
    remainder= clone%10;
    clone/=10;
    fact=1;
    if(remainder==0){
        fact=0;
    }


for(i=1; i<=remainder; i++){
    fact=fact*i;
    }
    result+=fact;
}

if(result==n){
    printf("%d is a strong Number!!", n);
}

else{
    printf("%d is not a strong Number", n);
}

return 0;
}
