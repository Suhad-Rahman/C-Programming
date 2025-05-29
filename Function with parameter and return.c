#include<stdio.h>
int main(){
int n, res;
printf("Enter Number= ");
scanf("%d", &n);

res=Suhad_evenodd(n);

if(res==0){
    printf("Even");
}
else{
    printf("Odd");
}





return 0;
}

int Suhad_evenodd(int n){
    int flag;
    if(n%2==0){
        flag=0;
    }
    else{
        flag=1;
    }
    return flag;
}
