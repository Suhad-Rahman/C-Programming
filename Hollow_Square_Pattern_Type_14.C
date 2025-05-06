#include<stdio.h>
int main(){
int n, row, col;

printf("Enter N= ");
scanf("%d", &n);

for(row=1; row<=n; row++){

    for(col=1; col<=n; col++){
        if(row==1 || row==n || col==1 || col==n || col==row || col+row==n+1){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}


return 0;
}
