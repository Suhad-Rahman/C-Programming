#include<stdio.h>
int main(){
int n;
printf("Enter Number= ");
scanf("%d", &n);

Suhad_prime(n);

return 0;
}

void Suhad_prime(int n){
    int flag=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

}
