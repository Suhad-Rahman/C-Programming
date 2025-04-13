#include<stdio.h>
int main(){

int a,b,c;
printf("Enter a= ");
scanf("%d", &a);

printf("Enter b= ");
scanf("%d", &b);

printf("Enter c= ");
scanf("%d", &c);

if(a<b){
    if(a<c){
        printf("a=%d is the smallest number!", a);
    }
    else{
        printf("c=%d is the smallest number!!", c);
    }
}
else if(b<a){
    if(b<c){
        printf("b=%d is the smallest number!", b);
    }
    else{
        printf("c=%d is the smallest number!!", c);
    }
}



return 0;
}
