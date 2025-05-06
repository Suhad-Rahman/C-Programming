#include<stdio.h>
int main(){
int n, row, col;

printf("Enter N= ");
scanf("%d", &n);

for(row=1; row<=n; row++){
    for(col=1; col<=n-row; col++){
        printf("  ");
    }
    for(col=1; col<=row; col++){
        if(col==1 || row==n){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    for(col=row-1; col>=1; col--){
        if(col==1 || row==n){
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
