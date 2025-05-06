#include<stdio.h>
int main(){
int n, row, col;

printf("Entet N= ");
scanf("%d", &n);

for(row=1; row<=n; row++){

    for(col=1; col<=row; col++){
        if( (row+col)%2==0){
            printf("* ");
        }
        else{
            printf("$ ");
        }

    }
    printf("\n");
}



return 0;
}
