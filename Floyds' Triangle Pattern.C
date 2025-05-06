#include<stdio.h>
int main(){
int n, row, col, i=1;

printf("Enter N = ");
scanf("%d", &n);


for(row=1; row<=n; row++){

    for(col=1; col<=row; col++){
        printf("%2d ", i);
        i++;
    }

    printf("\n");
}
return 0;
}
