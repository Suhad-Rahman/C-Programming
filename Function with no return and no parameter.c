#include<stdio.h>
int main(){


Suhad_prime();


return 0;
}

void Suhad_prime(){
    int n, i, flag=0;

    printf("N = ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++){
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
