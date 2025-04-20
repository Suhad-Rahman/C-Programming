#include<stdio.h>
int main(){
unsigned long long number, originalnumber,n=0, remainder, result=0;

printf("Enter the Number= ");
scanf("%llu", &number);

originalnumber=number;

while(originalnumber!=0){
    originalnumber/=10;
    ++n;
}

originalnumber=number;

while(originalnumber!=0){
    remainder=originalnumber%10;
unsigned long long power=1;
for(int i=0;i<n;i++){
    power*=remainder;
}
result+=power;
originalnumber/=10;
}

if(number==result){
    printf("%llu is an ARMSTRONG number.\n", number);
}
else{
    printf("%llu is not an ARMSTRONG Number.\n", number);
}

return 0;
}
