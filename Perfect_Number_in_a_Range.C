#include<stdio.h>
int main(){
int n, low, high, clone, store, count;

printf("\nEnter low= ");
scanf("%d", &low);

printf("\nEnter High= ");
scanf("%d", &high);

count=0;
for(n=low; n<=high; n++){
clone=n;

store=0;
    for(int i=1; i<=n/2; i++){

        if(clone%i==0){
            store+=i;
            }
    }

if(store==n && store!=0){
    printf("\n%d is a Perfect Number!\n", n);
        count++;
    }
}

printf("\nTotal Perfect Number in Range is= %d\n", count);

return 0;
}
