#include<stdio.h>
int main(){
long long a,b,c;
printf("Enter a= ");
scanf("%lld", &a);

printf("Enter b= ");
scanf("%lld", &b);

printf("Enter c= ");
scanf("%lld", &c);

if(a>b){
    if(a>c){
        printf("%lld is the largest number!!", a);
    }
    else("%lld is the largest number!!", c);
}
else if(b>c){
    if(b>a){
        printf("%lld is the largest number!!", b);
    }
    else{
        printf("%lld is the largest number!!", c);
    }
}
else{
        printf("%lld is the largest number!!!", c);
}
return 0;
}
