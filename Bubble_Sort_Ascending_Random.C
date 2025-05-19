#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
int U[25], i, clone, flag;
    for(i=0; i<25; i++){
        U[i]= rand() % 101;
    }
printf("\nInitial Array= ");
    for(i=0; i<25; i++){
        printf(" %d ", U[i]);
    }
//Bubble Sorting
for(i=0; i<25-1; i++){
flag=0;
    for(int j=0; j<25-i-1; j++){
        if(U[j]>U[j+1]){
            clone=U[j];
            U[j]=U[j+1];
            U[j+1]= clone;
            flag=1;
        }
    }
            if(flag==0){
            break;
        }
}
printf("\n\nThe Sorted Array= ");
    for(i=0; i<25; i++){
        printf(" %d ", U[i]);
    }
return 0;
}
