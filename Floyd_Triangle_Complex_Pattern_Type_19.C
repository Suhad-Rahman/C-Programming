#include<stdio.h>
int main(){
int n, row, col, a=1, b;

printf("Enter N= ");
scanf("%d", &n);

for(row=1; row<=n; row++){

    b=a+row-1;
    for(col=1; col<=row; col++, a++){
        if(row%2!=0){
        printf("%3d ", a);

        }
        else{
            printf("%3d ", b--);
        }


           }
    printf("\n");
}





return 0;
}
