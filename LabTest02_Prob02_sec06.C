#include<stdio.h>
int main(){

int row, col, n;

printf("Enter N= ");
scanf("%d",&n);

for(row=1; row<=n; row++){

    for(col=n-row; col>=1; col--){
        printf("  ");
    }
    for(col=row; col<=(row*2)-1; col++){
        printf("%d ",col);
    }

       for(col=(row*2)-2; col>=row; col--){
        printf("%d ",col);
    }
    printf("\n");

}


for(row=n-1; row>=1; row--){

    for(col=n-row; col>=1; col--){
        printf("  ");
    }
    for(col=row; col<=(row*2)-1; col++){
        printf("%d ",col);
    }

       for(col=(row*2)-2; col>=row; col--){
        printf("%d ",col);
    }
    printf("\n");

}

return 0;
}
