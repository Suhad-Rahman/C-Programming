#include<stdio.h>
int main(){

int res=Suhad_evenodd();

if(res==1){
    printf("Even");
}
else{
    printf("Odd");
}

return 0;
}

int Suhad_evenodd(){
    int n, flag;
    printf("Enter N = ");
    scanf("%d", &n);

    if(n%2==0){
        flag=1;
    }
    else{
        flag=0;
    }
    return flag;
}
