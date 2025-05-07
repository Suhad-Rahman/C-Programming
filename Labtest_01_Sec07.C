#include<stdio.h>
int main()
{
int n, row, col;
printf("Enter the Number of Lines= ");
scanf("%d", &n);

for(row=n; row>=1; row--)   {


    for(col=1; col<=n-row; col++)   {

        printf("  ");
    }
    for(col=row; col<=(row*2-1); col++){

        printf("%d ", col);
    }
    for(col=row*2-2; col>=row; col--){
        printf("%d ", col);
    }
    printf("\n");

}


for(row=2; row<=n; row++)   {


    for(col=1; col<=n-row; col++)   {

        printf("  ");
    }
    for(col=row; col<=(row*2-1); col++){

        printf("%d ", col);
    }
    for(col=row*2-2; col>=row; col--){
        printf("%d ", col);
    }
    printf("\n");

}

















return 0;
}
